#pragma once
#include "Character.h"

class Knight : public Character
{
public:
	Knight();
	virtual ~Knight();

	virtual void Attack() override;
};