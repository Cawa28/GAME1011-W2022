#pragma once
#include <iostream>
#include "Creature.h"
#include <fstream>
#include <string>
#include <Windows.h>
using namespace std;

class AnimationFrame : public Creature
{
private:
	static const int size{ 6 };
	
	Creature* creatures[size];
	

public:

	void DisplayAnimation(string file)
	{
		string getcontent;
		ifstream openfile(file);

		if (openfile.is_open())
		{
			while (getline(openfile, getcontent))
			{
				cout << getcontent << endl;
				if (getcontent == ".")
				{
					Sleep(1000);
				}
			}
			Sleep(2000);
		}
	}
};

