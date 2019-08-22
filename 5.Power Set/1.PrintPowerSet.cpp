#include <iostream>
using namespace std;

int size, bits[100], members[100];

void DisplayPowerSet()
{
	cout << "{" ;

	for (int i = 0; i < size; ++i)
	{
		if (1 == bits[i])
		{
			if (i != size - 1)
			{
				cout << " "
			}
		}
	}

	cout << "}"
}

void Binary(int i)
{
	if (size == i)
	{
		DisplayPowerSet();
	}

	a[i] = 0;
	Binary(i + 1);

	a[i] = 1;
	Binary(i + 1);
}

int main(int argc, char const *argv[])
{
	cout << "How many members" << endl;

	cin >> size;

	cout << "enter the members" << endl;

	for (int i = 0; i < size; ++i)
	{
		cin >> members[i];
	}

	Binary(0); // starts the call with 0

	return 0;
}