/*

0 1 0 1 0
1 0 1 0
0 1 0
1 0
0

build the  pyramid using recursion

*/

#include <iostream>
using namespace std;

void Column(int start, int stop)
{
	if (stop % 2 == 0)
	{
		if (start % 2 == 0)
		{
			cout << "0 ";
		}
		else
		{
			cout << "1 ";
		}
	}
	else
	{
		if (start % 2 == 0)
		{
			cout << "1 ";
		}
		else
		{
			cout << "0 ";
		}
	}

	if (start == stop)
	{
		cout << endl;

		return;
	}

	Column(start+1, stop); // layer two recursion
}

void Row(int start, int stop)
{
	Column(1, stop - start + 1); // secondary call 


	if (start == stop)
	{
		return;
	}

	Row(start+1, stop); // layer one recursion
}

int main(int argc, char const *argv[])
{
	// this is a two layer recursion code
	// primary call
	Row(1, 5); // current pyramid has 5 columns

	return 0;
}