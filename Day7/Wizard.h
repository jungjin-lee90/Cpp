#pragma once
#include "Character.h"

class Wizard : public Character
{
public:
	Wizard();
	virtual ~Wizard();

	virtual void Attack() override;
};
