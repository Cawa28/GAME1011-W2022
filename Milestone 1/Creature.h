#pragma once
#include <iostream>
using namespace std;

class Creature
{
private:
	string name;

public:
	Creature() { }

	Creature(string name)
	{
		this->name = name;
		cout << "Creature " << name << " was created!" << endl;
	};

	string GetName()
	{
		return name;
	}

	//void virtual Draw() const = 0;
};

