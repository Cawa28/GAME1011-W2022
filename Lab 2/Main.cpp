#include <iostream>
using namespace std;

class Enemy
{
private:
	double damage;
	string warcry;

public:
	void SetDamage(double damage)
	{
		this->damage = damage;
	}

	void SetWarcry(string warcry)
	{
		this->warcry = warcry;
	}

	Enemy()
	{
		SetDamage(10);
		SetWarcry("Roar!");
	}

	virtual void Attack() const = 0
	{
		cout << warcry << "Deal" << damage << " to opponent." << endl;
	}

	double GetDamage() const
	{
		return damage;
	}

	string GetWarcry() const
	{
		return warcry;
	}
};

class Skeleton : public Enemy
{
public:
	Skeleton() : Enemy() { }

	void Attack() const
	{
		cout << GetWarcry()+" Hssssssssssss " << "Deal " << GetDamage() << " damage to opponent." << "\tDeal " << GetDamage() << " damage to opponent." << endl;
	}
};

class Troll : public Enemy
{
public:
	Troll() : Enemy() { }

	void Attack() const
	{
		cout << GetWarcry()+ " Grrrrrrrr " << "Deal " << GetDamage() * 1.5 << " damage to opponent." << endl;
	}
};

class Orc : public Enemy
{
public:
	Orc() : Enemy() { }

	void Attack() const
	{
		cout << GetWarcry() +" AHHHHHHHHHH " << "Deal " << GetDamage() * 2 << " damage to opponent.\t";
		cout << GetWarcry() +" AHHHHHHHHHH " << "Deal " << GetDamage() * 2 << " damage to opponent." << endl;
	}
};

class DarcOrc : public Orc
{
private:
	string magic;

public:
	DarcOrc() : Orc() { }

	void Attack() const
	{
		cout << "FireBall.. Deal " << GetDamage() + (rand() % 30 + 10) << " damage to opponent." << endl;
	}
};

int main()
{
	srand(time(0));
	
	const int NumberOfUnits = 4;
	Enemy* arr[NumberOfUnits] =
	{
	 new Skeleton(),
	 new Troll(),
	 new Orc(),
	 new DarcOrc()
	};

	for (int i = 0; i < NumberOfUnits; i++)
	{
		arr[i]->Attack();
	}

	return 0;
}