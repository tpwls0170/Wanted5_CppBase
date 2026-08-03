#include <Engine//Engine.h>
#include "Actor.h"

namespace Craft
{
	Actor::Actor()
	{}
	Actor::~Actor()
	{}
	void Actor::BeginPlay()
	{		
		// 이벤트 처리했따고 설정
		hasBeginPlay = true;
	}
	void Actor::Tick(float deltaTime)
	{
	}
	void Actor::Draw()
	{
	}
	void Actor::Destory()
	{
		// 삭제 예약 설정
		hasExpired = true;
	}
	void Craft::Actor::QuitGame()
	{
		// 엔진 종료 요청
		Engine::Get().Quit();
	}
}