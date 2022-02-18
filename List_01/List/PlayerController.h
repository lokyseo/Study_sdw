#pragma once
#include "Object.h"

class PlayerController : public Object
{
private:

public:
	virtual void Start();
	virtual void Update();
	virtual void LateUpdate();
	virtual void Render();
	virtual void Destroy();
public:
	PlayerController();
	virtual ~PlayerController();

};

