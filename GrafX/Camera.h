#pragma once

#include <vector>
#include <GL/glew.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

enum Camera_Movement
{
	FORWARD,
	BACKWARD,
	LEFT,
	RIGHT
};

const GLfloat YAW = -90.0f;
const GLfloat PITCH = 0.0f;
const GLfloat SPEED = 3.0f;
const GLfloat SENSITIVITY = 0.1f;
const GLfloat ZOOM = 45.0f;

class Camera
{
public:
	Camera();
	
	Camera(glm::vec3 position, glm::vec3 up, GLfloat yaw, GLfloat pitch);

	Camera(GLfloat posX, GLfloat posY, GLfloat posZ, GLfloat upX, GLfloat upY, GLfloat upZ, GLfloat yaw, GLfloat pitch);

	~Camera();

	friend class Window;

	void processKeyboard(Camera_Movement direction, GLfloat deltaTime);

	void processMouseMovement(GLfloat xoffset, GLfloat yoffset, GLboolean constainPitch);

	void processMouseScroll(GLfloat yoffset);

	// Getters
	glm::mat4 GetViewMatrix() const { return glm::lookAt(m_position, m_position + m_front, m_up); }
	GLfloat getZoom() const { return m_zoom; }

private:
	// Private Member Func
	void updateCameraVectors();

	// Private Member var
	glm::vec3 m_position;
	glm::vec3 m_front;
	glm::vec3 m_up;
	glm::vec3 m_right;
	glm::vec3 m_worldUp;
	// Eular Angles
	GLfloat m_yaw;
	GLfloat m_pitch;
	// Cam options
	GLfloat m_movementSpeed;
	GLfloat m_mouseSensitivity;
	GLfloat m_zoom;

};

