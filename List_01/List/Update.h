#pragma once
#include "Headers.h"

class Scene;

class MainUpdate
{
public:
	Scene* m_pScene;
	
	void Start();
	void Update();
	void LateUpdate();
	void FixedUpdate();
	void Render();
	void Destroy();
public:
	MainUpdate();
	~MainUpdate();
};
