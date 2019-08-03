/*
	1 + 2 + 3 + 4 + .... + n

	find the nth sum of this series using recursion
*/

#include <iostream>
using namespace std;

int NormalSeries(int n)
{
	if(n == 1)
	{
		return 1;
	}

	return n + NormalSeries(n-1);
}


int main(int argc, char const *argv[])
{
	cout << "enter the nth term of the series"

	int n;
	cin >> n;

	cout << "The nth summtion of this series is: " << NormalSeries(n) << endl;

	return 0;
}