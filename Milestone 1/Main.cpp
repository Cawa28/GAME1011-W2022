#include <iostream>
#include "Creature.h"
#include "Skeleton.h"
#include "Zombie.h"
#include "Slime.h"
#include "EnderMan.h"
#include "Butterfly.h"
#include "Pig.h"
#include "AnimationFrame.h"
using namespace std;

int main()
{
	Skeleton skeleton("Skeleton");
	Zombie zombie("Zombie");
	EnderMan enderMan("EnderMan");
	Pig pig("Pig");
	Slime slime("Slime");
	Butterfly butterfly("Butterfly");

	AnimationFrame creatures;
	//creatures.DisplayAnimation();


	return 0;
}