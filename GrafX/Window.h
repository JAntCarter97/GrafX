#pragma once

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include "Shader.h"
#include "Camera.h"
#include "Texture.h"
#include <iostream>
#include <string>

class Window
{
public:
	Window(std::string name, int width, int height);
	~Window();

	void init();
	void processEvents();
	void clear(float r, float g, float b, float a);
	void run();

private:
	std::string m_windowName;
	int m_windowWidth;
	int m_windowHeight;

	GLFWwindow* m_window;

};

