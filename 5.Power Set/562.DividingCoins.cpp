#include <iostream>
using namespace std;

int size, bits[100], members[100];


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
	}
	return 0;
}