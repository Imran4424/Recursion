/*

6 7 8 9 10
5 6 7 8
4 5 6
3 4
2

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
	Column(stop + 2 - start, stop+stop - (2*start) + 2); // secondary call 

	// start condition for cloumn is row's stop + 2 - start
	// start condition for cloumn is row's stop+stop - (2*start) + 2

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