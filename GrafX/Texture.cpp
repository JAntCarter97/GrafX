/*
#include "Texture.h"

#include "Shader.h"


Texture::Texture(std::string filePath)
	: m_filePath(filePath)
{

}


Texture::~Texture()
{
	glDeleteTextures(1, &m_texture);
}


void Texture::create()
{
	int width, height, numComponents;
	// Load in a texture
	unsigned char* imageData = stbi_load(m_filePath.c_str(), &width, &height, &numComponents, 4);
	if (imageData == NULL)
	{
		std::cout << "Texture Loading failed for texture" << std::endl;
	}

	// ==============
	// Loaded Texture
	//===============
	glGenTextures(1, &m_texture);
	glBindTexture(GL_TEXTURE_2D, m_texture);

	// Read 2d texture wrapped by x and y pixels, repeated
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	// Set min/mag filters to linear 
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, imageData);
	glGenerateMipmap(GL_TEXTURE_2D); // Gen Mipmap

	// Delete texture data from cpu 
	stbi_image_free(imageData);
	glBindTexture(GL_TEXTURE_2D, 0);

	//=========================
	// Auto added mixed texture
	// For example
	//=========================
	imageData = stbi_load("../Textures/Sprite/awesomeface.png", &width, &height, &numComponents, 3);
	glGenTextures(1, &m_texture2);
	glBindTexture(GL_TEXTURE_2D, m_texture2);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, imageData);
	glGenerateMipmap(GL_TEXTURE_2D);
	stbi_image_free(imageData);
	glBindTexture(GL_TEXTURE_2D, 0);

}

void Texture::use(GLuint &program)
{
	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, m_texture);
	glUniform1i(glGetUniformLocation(program, "ourTexture1"), 0);
	glActiveTexture(GL_TEXTURE1);
	glBindTexture(GL_TEXTURE_2D, m_texture2);
	glUniform1i(glGetUniformLocation(program, "ourTexture2"), 1);

}
*/