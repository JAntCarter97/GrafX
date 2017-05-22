/*
#pragma once

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include "stb_image.h"

#include <iostream>
#include <string>


class Texture
{
public:
	Texture(std::string filePath);

	~Texture();

	void create();
	void use(GLuint &program);

	GLuint program;
private:
	GLuint m_texture;
	GLuint m_texture2;
	std::string m_filePath;
};
*/
