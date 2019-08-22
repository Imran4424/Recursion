#include <iostream>
using namespace std;

int size, members[100];

void DisplaySet()
{
	for (int i = 0; i < size; ++i)
	{
		cout << members[i] << " ";
	}

	cout << endl;
}

int main(int argc, char const *argv[])
{
	cout << "How many members" << endl;

	cin >> size;

	for (int i = 0; i < size; ++i)
	{
		cin >> members[i];
	}

	DisplaySet();
	
	return 0;
}