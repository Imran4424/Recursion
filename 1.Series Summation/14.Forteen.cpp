/*
	1.3.5.7 + 3.5.7.9 + 5.7.9.11 + .... + n

	find the nth sum of this series using recursion
*/

#include <iostream>
using namespace std;

int MultiSeries(int n)
{
	if(n == 1)
	{
		return 1*2*3;
	}


	return n * (n + 1) * (n + 2) + MultiSeries(n-1);
}


int main(int argc, char const *argv[])
{
	cout << "enter the nth term of the series" << endl;

	int n;
	cin >> n;

	cout << "The nth summtion of this series is: " << MultiSeries(n) << endl;

	return 0;
42