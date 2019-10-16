#include <iostream>
#include "dragon.h"

void Dragon::DragonDamage()
{
	if (dragonHealth <= 0)
	{
		std::cout << "The dragon died. \n";
	}
}