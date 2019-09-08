/*
	this is permuation of sets in efficient time

	using backtracking
*/

#include <iostream>
using namespace std;

int bin[100];
bool visited[100];
int bits;


void InitVisited()
{
	for (int i = 0; i < 100; ++i)
	{
		visited[i] = false;
	}
}

void Display()
{
	for (int i = 0; i < bits; ++i)
	{
		cout << bin[i] ;
	}

	cout << endl;
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
		if (!visited[j]) 
		{
			bin[i] = j;
			visited[j] = 1;

			Permutation(i+1);

			visited[j] = 0; // backtracking 
		}		
	}
}

int main(int argc, char const *argv[])
{
	cout << "enter the number of bits" << endl;
	cin >> bits;

	cout << endl ;

	InitVisited();

	Permutation(0);

	return 0;
}