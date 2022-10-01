#pragma once
#include "Object.h"

class Pawn : public Object
{
public:
	Pawn();
	virtual ~Pawn();

	virtual void Possess();
	virtual void UnPossess();

	virtual void PlayerInput(int key);
};
