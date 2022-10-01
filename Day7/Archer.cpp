#include "Archer.h"

Archer::Archer()
{
}

Archer::~Archer()
{
}

void Archer::Attack()
{
	Character::Attack();
	cout << "Archer Attack" << endl;
}
