#include <iostream>
using namespace std;

int size, members[100];

int main(int argc, char const *argv[])
{
	cout << "How many members" << endl;

	cin >> size;

	cout << "enter the members" << endl;

	for (int i = 0; i < size; ++i)
	{
		cin >> members[i];
	}

	DisplaySet();
	
	return 0;
}