#include "Knight.h"

Knight::Knight()
{

}

Knight::~Knight()
{

}

void Knight::Attack()
{
	Character::Attack();
	cout << "Knight Attack" << endl;
}

