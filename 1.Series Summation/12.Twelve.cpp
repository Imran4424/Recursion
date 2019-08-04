/*
	1^2.2^2 + 2^2.3^2 + 3^2.4^2 + .... + n

	find the nth sum of this series using recursion
*/

#include <iostream>
using namespace std;

int MultiSquareSeries(int n)
{
	if(n == 1)
	{
		return 1*1*2*2;
	}

	

	return n * n * (n+1) * (n+1) + MultiSquareSeries(n-1);
}


int main(int argc, char const *argv[])
{
	cout << "enter the nth term of the series" << endl;

	int n;
	cin >> n;

	cout << "The nth summtion of this series is: " << MultiSquareSeries(n) << endl;

	return 0;
}