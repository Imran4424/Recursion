/*

        1
      2 2
    3 3 3
  4 4 4 4
5 5 5 5 5

build the  pyramid using recursion

*/

#include <iostream>
using namespace std;

void Space(int start, int stop)
{

	if (start > stop)
	{
		return;
	}
	
	cout << "  "; // two spaces, one for digit space, one for space space

	Space(start + 1, stop);
}

void Column(int start, int stop)
{

	cout << start << " " ;

	if (start >= stop)
	{
		cout << endl;

		return;
	}

	Column(start+1, stop); // layer two recursion
}

void Row(int start, int stop)
{
	Space(1, stop - start);

	Column(1, start); // secondary call 

	if (start >= stop)
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