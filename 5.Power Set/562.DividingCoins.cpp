#include <iostream>
using namespace std;

int size, bits[100], members[100];



void Binary(int i)
{
	if (i == size)
	{
		return;
	}

	bits[i] = 0;
	Binary(i+1);

	bits[i] = 1;
	Binary(i+1);
}

int main(int argc, char const *argv[])
{
	int test;
	cin >> test;

	while(test--)
	{
		cin >> size;

		for (int i = 0; i < size; ++i)
		{
			cin >> members[size];
		}

		Binary(0);
	}
	return 0;
}