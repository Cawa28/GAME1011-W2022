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

	cout << "\n\tColony of creatures: " << endl;
	AnimationFrame creatures;
	creatures.DisplayAnimation("Pig.txt");
	creatures.DisplayAnimation("Zombie.txt");
	creatures.DisplayAnimation("Slime.txt");
	creatures.DisplayAnimation("Butterfly.txt");
	creatures.DisplayAnimation("EnderMan.txt");
	creatures.DisplayAnimation("Skeleton.txt");

	/*for (int i = 0; i < 6; i++)
	{
		creatures[i].DisplayAnimation(file);
	}*/

	return 0;
}