#pragma once
#include <iostream>
#include "Creature.h"
using namespace std;

class Zombie : public Creature
{
public:
	Zombie(string name) :Creature(name) { };
};

