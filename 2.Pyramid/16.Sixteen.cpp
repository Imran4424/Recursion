/*

5 6 7 8 9
4 6 7 8
3 5 6
2 3
1

build the  pyramid using recursion

*/

#include <iostream>
using namespace std;

void Column(int start, int stop)
{
	cout << start << " " ;

	if (start == stop)
	{
		cout << endl;

		return;
	}

	Column(start+1, stop); // layer two recursion
}

void Row(int start, int stop)
{
	Column(stop + 1 - start, stop+stop - (2*start) + 1); // secondary call 

	// start condition for cloumn is row's stop + 1 - start
	// start condition for cloumn is row's stop+stop - (2*start) + 1

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