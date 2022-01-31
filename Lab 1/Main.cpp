#include <iostream>
#include <Windows.h>
using namespace std;

void Display(string arr1[], string arr2[], int size)
{
	cout << "\t\\/ " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr1[i];
	}
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr2[i];
	}
	cout << endl << endl;
}

void Cycle(string arr1[], string arr2[], int size)
{
	
}

int main()
{
	int const size{ 10 };
	string firstArr[size];
	string secondArr[size];
	secondArr[0] = "~";

	for (int i = 0; i < 8; i++)
	{
		firstArr[i] = " ";
	}
	for (int i = 8; i < size; i++)
	{
		firstArr[i] = "0";
	}
	for (int i = 1; i < size; i++)
	{
		secondArr[i] = "0";
	}


	Display(firstArr, secondArr, size);
	/*while (true)
	{

	}*/
cycle:
		Sleep(1000);

		firstArr[5] = "0";
		secondArr[5] = " ";
		Display(firstArr, secondArr, size);
		Sleep(1000);
		firstArr[4] = "0";
		firstArr[6] = "0";
		secondArr[4] = " ";
		secondArr[6] = " ";
		Display(firstArr, secondArr, size);
		Sleep(1000);
		firstArr[4] = " ";
		firstArr[6] = " ";
		secondArr[4] = "0";
		secondArr[6] = "0";
		Display(firstArr, secondArr, size);
		Sleep(1000);
		secondArr[5] = "0";
		firstArr[5] = " ";
		Display(firstArr, secondArr, size);

		goto cycle;

	

	return 0;
}