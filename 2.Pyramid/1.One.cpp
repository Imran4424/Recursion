/*

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

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

	Column(start+1, stop);
}

void Row(int start, int stop)
{
	Column(1, start);


	if (start == stop)
	{
		return;
	}

	Row(start+1, stop);
}

int main(int argc, char const *argv[])
{
	Row(1, 5);

	return 0;
}