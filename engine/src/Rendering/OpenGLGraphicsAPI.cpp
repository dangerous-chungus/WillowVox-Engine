#include <WillowVoxEngine/Rendering/OpenGLGraphicsAPI.h>

#include <glad/glad.h>
#include <GLFW/glfw3.h>

namespace WillowVox
{
    OpenGLGraphicsAPI::~OpenGLGraphicsAPI()
    {
        glfwTerminate();
    }

    void OpenGLGraphicsAPI::Initialize()
    {
        // Initialize GLFW
        glfwInit();
    }

    void OpenGLGraphicsAPI::SetShaderAttribVec2(int index, uint32_t size, uint32_t offset)
    {
        glEnableVertexAttribArray(index);
        glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, size, (void*)offset);
    }

    void OpenGLGraphicsAPI::SetShaderAttribVec3(int index, uint32_t size, uint32_t offset)
    {
        glEnableVertexAttribArray(index);
        glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, size, (void*)offset);
    }
}