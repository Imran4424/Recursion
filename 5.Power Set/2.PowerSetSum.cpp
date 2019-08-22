#include <iostream>
using namespace std;

int size, bits[100], members[100];

void DisplaySetSum()
{

}

void Binary(int i)
{
	if (size == i)
	{
		DisplaySetSum();

		return;
	}

	bits[i] = 0;
	Binary(i + 1);

	bits[i] = 1;
	Binary(i + 1);
}

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