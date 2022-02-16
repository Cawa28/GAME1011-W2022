#pragma once
#include <iostream>
#include "Creature.h"
using namespace std;

class AnimationFrame : public Creature
{
private:
	int const size{ 6 };
	
	Creature* creatures = new Creature();

public:

	void DisplayAnimation()
	{
		
		// read the animation from each Creature's file.
	}
};

