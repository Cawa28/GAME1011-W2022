#include <iostream>
#include "SimpleVector.h"
using namespace std;

template <class T>
class SortableVector : public SimpleVector<T>
{
public:
	SortableVector();

	template <class T>
	T Sort(T *arr, int size)
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if (i > j)
				{
					swap(i, j);
				}
			}
		}
		
	}

};

int main()
{
	SimpleVector<int> vector(5);
	vector[4] = 10;
	vector.print();

	vector.pop_back();
	vector.print();

	vector.push_back(15);
	vector.print();

	/*SortableVector<int> vector2;
	vector2.Sort();*/
	
	

	system("pause 0");
	return 0;
}