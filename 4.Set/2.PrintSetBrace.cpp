#include <iostream>
using namespace std;

int size, members[100];

void DisplaySet()
{
	cout << "{" ;

	for (int i = 0; i < size; ++i)
	{
		if (size - 1 != i)
		{
			cout << " " << members[i] << "," ; 
		}
		else
		{
			cout << " " << members[i] ;
		}
	}

	cout << "}" << endl;
}

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