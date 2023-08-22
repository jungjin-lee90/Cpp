#include "Archer.h"

Archer::Archer()
{
	cout << "Archer" << endl;
}

Archer::~Archer()
{
}

void Archer::Attack()
{
	Character::Attack();
	cout << "Archer Attack" << endl;
}
