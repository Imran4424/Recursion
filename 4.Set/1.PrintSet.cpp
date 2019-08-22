#include <iostream>
using namespace std;

int n, members[100];

int main(int argc, char const *argv[])
{
	cout << "How many members" << endl;

	cin >> members;

	for (int i = 0; i < members; ++i)
	{
		cin >> members[i];
	}
	
	return 0;
}