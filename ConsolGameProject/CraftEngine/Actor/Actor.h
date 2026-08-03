#pragma once
#include <memory>	// std::wepk_ptr 사용을 위해

namespace Craft
{
	//전방 선언
	class Level;

	// 가상 공간에 배치될 모든 액터의 기본 클래스
	class Actor
	{
	public:
		Actor();
		virtual ~Actor();

		// 게임 플레이 이벤트 함수
		virtual void BeginPlay();
		virtual void Tick(float deltaTime);
		virtual void Draw();

		// 액터 제거 함수
		void Destory();

		// 게임 엔진 종료 함수
		void QuitGame();

		// Getter / Setter
		inline bool HasBeginPlay() const { return  hasBeginPlay; }
		inline bool IsActive() const { return isActive && !hasExpired; }
		inline bool HasExpired() const { return hasExpired; }

		inline std::shared_ptr<Level> GetOwner() const { return owner.lock(); }
		inline void SetOwner(std::weak_ptr<Level> newOwner) { owner = newOwner; }

	protected:
		// BeginPlay 이벤트 처리 여부 플래그
		bool hasBeginPlay = false;

		// 액터 활성화 여부 플래그
		bool isActive = true;

		// 삭제 요청 여부 플래그
		bool hasExpired = false;

		// 오너십
		// weak_ptr -> 약참조 
		// -> 실제 사용을 위해서는 해당 위치가 유효한지 확인해야됨
		std::weak_ptr<Level> owner;
	};
}

