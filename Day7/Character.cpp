#include "Character.h"

Character::Character()
{

}

Character::~Character()
{

}

float Character::TakeDamage(float fDamage)
{
	return Pawn::TakeDamage(fDamage);
}

void Character::Possess()
{
	Pawn::Possess();
}

void Character::UnPossess()
{
	Pawn::UnPossess();
}

void Character::PlayerInput(int key)
{
	Pawn::PlayerInput(key);
}

void Character::jump()
{

}

void Character::Attack()
{
	
}
