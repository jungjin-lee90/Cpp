#pragma once
#include <iostream>

using namespace std;
class Object
{
public:
	Object();
	virtual ~Object();

	virtual float TakeDamage(float fDamage);

	string Name;
	
};