#pragma once
#include "Pawn.h"

class Character : public Pawn
{
public:
	Character();
	virtual ~Character();

	virtual float TakeDamage(float fDamage) override;

	virtual void Possess() override;
	virtual void UnPossess() override;

	virtual void PlayerInput(int key) override;

	virtual void jump();

	virtual void Attack();
};