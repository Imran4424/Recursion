/*
	1.3 + 3.5 + 5.7 + .... + n

	find the nth sum of this series using recursion
*/

#include <iostream>
using namespace std;

int MultiSeries(int n)
{
	if(n == 1)
	{
		return 1*3;
	}


	return n * (n + 2) + MultiSeries(n-2);
}


int main(int argc, char const *argv[])
{
	cout << "enter the nth term of the series" << endl;

	int n;
	cin >> n;

	cout << "The nth summtion of this series is: " << MultiSeries(n) << endl;

	return 0;
}