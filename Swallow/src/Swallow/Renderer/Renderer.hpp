#pragma once
#include "Camera.hpp"
#include "Buffer.hpp"
#include "Shader.hpp"

#include "RenderCommand.hpp"
// TODO: Remove
#include "Platform/OpenGL/OpenGLShader.h"

namespace Swallow {

	class Renderer
	{
	public:
		static void BeginScene(Camera& c);
		static void EndScene();

		static void Submit(const Ref<OpenGLShader>& shader, const Ref<VertexArray>& vertexArray, const glm::mat4& transform = glm::mat4(1.0f));

		inline static RendererAPI::API GetAPI() { return RendererAPI::GetAPI(); }
	private:
		struct SceneData {
			glm::mat4 ViewProjectionMatrix;
		};
		static SceneData* s_SceneData;
	};
}