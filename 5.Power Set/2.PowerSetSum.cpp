#include <iostream>
using namespace std;

int size, bits[100], members[100];

int main(int argc, char const *argv[])
{
	cout << "how many members" << endl;

	cin >> size;

	cout << enter the members << endl;

	for (int i = 0; i < size; ++i)
	{
		cin >> members[i];
	}


	Binary(0); // starts the recursive call with 0

	return 0;
}