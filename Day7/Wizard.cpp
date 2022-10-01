#include "Wizard.h"

Wizard::Wizard()
{
}

Wizard::~Wizard()
{
}

void Wizard::Attack()
{
	Character::Attack();
	cout << "Wizard Attack" << endl;
}
