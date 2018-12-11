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

	//Utility uniform function declarations 
	//This is your connection to the properrties of the shaders
	void setBool(const std::string &name, bool value) const;
	void setInt(const std::string &name, int value) const;
	void setFloat(const std::string &name, float value) const;
	void setVec2(const std::string &name, const glm::vec2 &value) const;
	void setVec2(const std::string &name, float x, float y) const;
	void setVec3(const std::string &name, const glm::vec3 &value) const;
	void setVec3(const std::string &name, float x, float y, float z) const;
	void setVec4(const std::string &name, const glm::vec4 &value) const;
	void setVec4(const std::string &name, float x, float y, float z, float w);
	void setMat2(const std::string &name, const glm::mat2 &mat) const;
	void setMat3(const std::string &name, const glm::mat3 &mat) const;
	void setMat4(const std::string &name, const glm::mat4 &mat) const;

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

