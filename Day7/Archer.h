#pragma once
#include "Character.h"

class Archer : public Character
{
public:
	Archer();
	virtual ~Archer();

	virtual void Attack() override;
};