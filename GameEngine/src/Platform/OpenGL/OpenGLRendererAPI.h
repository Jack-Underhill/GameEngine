#pragma once

#include "GameEngine/Renderer/RendererAPI.h"

namespace GameEngine
{
	class OpenGLRendererAPI : public RendererAPI
	{
	public:
		void SetClearColor(const glm::vec4& color) override;
		void Clear() override;
		
		void DrawIndexed(const Ref<VertexArray>& vertexArray) override;

	private:
	
	};

}