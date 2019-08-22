#include <iostream>
using namespace std;

int n, members[100];

void DisplaySet()
{
	for (int i = 0; i < n; ++i)
	{
		cout << members[i] << " ";
	}

	cout << endl;
}

int main(int argc, char const *argv[])
{
	cout << "How many members" << endl;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> members[i];
	}

	DisplaySet();
	
	return 0;
}