#include <iostream>
using namespace std;

int size, bits[100], members[100];

int count = 0;

void DisplayPowerSet()
{
	bool firstElement = true;

	cout << "{" ;

	for (int i = 0; i < size; ++i)
	{
		if (1 == bits[i])
		{
			if (firstElement)
			{
				cout << members[i] ;

				firstElement = false;
			}
			else
			{
				cout << "," << members[i] ;
			}
		}
	}

	cout << "}" ;
}

int NumberOfMembers()
{
	int number = 1;

	for (int i = 0; i < size; ++i)
	{
		number = number * 2;
	}

	return number;
}

void Binary(int i)
{
	if (size == i)
	{
		if (count == 0)
		{
			cout << "{ " ;
		}

		DisplayPowerSet();

		count++;

		if (count != NumberOfMembers())
		{
			cout << ", " ;
		}
		else
		{
			cout << " }" ;
		}

		return;
	}

	bits[i] = 0;
	Binary(i + 1);

	bits[i] = 1;
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