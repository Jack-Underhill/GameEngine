#pragma once

#include "GameEngine/Input.h"

namespace GameEngine
{
	class WindowsInput : public Input
	{
	protected:
		virtual std::pair<float, float> GetMousePositionImpl() override;
		virtual float GetMouseXImpl() override;
		virtual float GetMouseYImpl() override;

		virtual bool IsKeyPressedImpl(int keyCode) override;
		virtual bool IsMouseButtonPressedImpl(int button) override;
	};
}