/*
	2 + 5 + 8 + 11 + .... + n

	find the nth sum of this series using recursion
*/

#include <iostream>
using namespace std;

int NormalSeries(int n)
{
	if(n == 2)
	{
		return 2;
	}

	return n + NormalSeries(n-3);
}


int main(int argc, char const *argv[])
{
	cout << "enter the nth term of the series" << endl;

	int n;
	cin >> n;

	cout << "The nth summtion of this series is: " << NormalSeries(n) << endl;

	return 0;
}