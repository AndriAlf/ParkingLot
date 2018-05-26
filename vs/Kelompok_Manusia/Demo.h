#pragma once
#include "RenderEngine.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <SOIL/SOIL.h>

class Demo :
	public RenderEngine
{
public:
	Demo();
	~Demo();
private:
	GLuint shaderProgram, VBO, VAO, EBO, texture, VBO2, VAO2, EBO2, texture2, VBO3, VAO3, EBO3, texture3, VBO4, VAO4, EBO4, texture4, VBO5, VAO5, EBO5, texture5, VBO6, VAO6, EBO6, texture6, VBO7, VAO7, EBO7, texture7, VBO8, VAO8, EBO8, texture8, VBO9, VAO9, EBO9, texture9, VBO10, VAO10, EBO10, texture10, VBO11, VAO11, EBO11, texture11, VBO12, VAO12, EBO12, texture12, VBO13, VAO13, EBO13, texture13;
	float angle = 0, tz=0;
	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	virtual void ProcessInput(GLFWwindow *window);
	virtual void Gerak(float tz);
	void BuildLampStand();
	void BuildLamp();
	void BuildLampRoof();
	void BuildPhalanx();
	void BuildPalang();
	void BuildRoom();
	void BuildRoof();
	void BuildWindow();
	void BuildDoor();
	void BuildFloor();
	void BuildColoredPlane();
	void BuildCar1();
	void BuildCar2();
	void DrawLampStand();
	void DrawLamp();
	void DrawLampRoof();
	void DrawPhalanx();
	void DrawPalang();
	void DrawRoom();
	void DrawRoof();
	void DrawWindow();
	void DrawDoor();
	void DrawFloor();
	void DrawCar1();
	void DrawCar2();
	void DrawColoredPlane();
};

