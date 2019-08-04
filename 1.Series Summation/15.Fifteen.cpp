/*
	2.5.8 + 5.8.11 + 8.11.14 + .... + n

	find the nth sum of this series using recursion
*/

#include <iostream>
using namespace std;

int MultiSeries(int n)
{
	if(n == 2)
	{
		return 2*5*8;
	}


	return n * (n + 3) * (n + 6) + MultiSeries(n-3);
}


int main(int argc, char const *argv[])
{
	cout << "enter the nth term of the series" << endl;

	int n;
	cin >> n;

	cout << "The nth summtion of this series is: " << MultiSeries(n) << endl;

	return 0;
}