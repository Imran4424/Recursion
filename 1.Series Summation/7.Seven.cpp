/*
	2.1 + 5.3 + 8.5 + .... + n

	find the nth sum of this series using recursion
*/

#include <iostream>
using namespace std;

int MultiSeries(int n)
{
	if(n == 2)
	{
		return 2*1;
	}

	int theN = ((n - 2) / 3) + 1; // hence nth-term = a+(n-1)d 

	return n * (n - theN) + MultiSeries(n-3);
}


int main(int argc, char const *argv[])
{
	cout << "enter the nth term of the series" << endl;

	int n;
	cin >> n;

	cout << "The nth summtion of this series is: " << MultiSeries(n) << endl;

	return 0;
}