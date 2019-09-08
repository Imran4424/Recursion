#include <iostream>
using namespace std;

int bin[100];
int bits;

void Display()
{
	for (int i = 0; i < bits; ++i)
	{
		cout << bin[i] ;
	}

	cout << endl;
}

bool IsUnique(int x, int y)
{
	for (int i = 0; i < x; ++i)
	{
		if (y == bin[i])
		{
			return false;
		}
	}

	return true;
}

void Permutation(int i)
{
	if (i == bits)
	{
		Display();

		return;
	}

	for (int j = 0; j < bits; ++j) // this is building the initialization for  
	{                             //  permutation block, but it has duplicates entries
		
		// skipping the values which have duplicate digits, to make this permutation
		if (IsUnique(i, j)) 
		{
			bin[i] = j;

			Permutation(i+1);
		}		
	}
}

int main(int argc, char const *argv[])
{
	cout << "enter the number of bits" << endl;
	cin >> bits;

	cout << endl ;

	Permutation(0);

	return 0;
}