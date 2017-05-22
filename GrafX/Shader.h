#pragma once

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include <string>
#include <glm/glm.hpp>
#include "Texture.h"

class Shader
{
public:
	Shader(const GLchar* vertexPath, const GLchar* fragmentPath);
	~Shader();
	friend class Window;

	void use();

private:
	GLuint m_program;
	static const int NUM_SHADERS = 2;
	GLuint m_VBO;
	GLuint m_VAO;
	GLuint m_lightVAO;
	//GLuint m_EBO;
	GLuint m_shaders[NUM_SHADERS];
	GLchar m_infoLog[512];
	GLint m_success;


};

