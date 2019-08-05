/*

E E E E
D D D D
C C C
B B
A

build the  pyramid using recursion

*/

#include <iostream>
using namespace std;

void Column(int start, int stop)
{
	cout << (char)(stop+64) << " " ;

	if (start == stop)
	{
		cout << endl;

		return;
	}

	Column(start+1, stop); // layer two recursion
}

void Row(int start, int stop)
{
	Column(1, start); // secondary call 


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