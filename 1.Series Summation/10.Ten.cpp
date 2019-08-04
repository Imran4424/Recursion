/*
	1.1^2 + 2.3^2 + 3.5^2 + .... + n

	find the nth sum of this series using recursion
*/

#include <iostream>
using namespace std;

int MultiSquareSeries(int n)
{
	if(n == 1)
	{
		return 1*1*1;
	}

	int theN = ((n - 1) / 1) + 1; // hence nth-term = a+(n-1)d

	int second = n - theN - 1; // calculating for this series 

	return n * second * second + MultiSquareSeries(n-1);
}


int main(int argc, char const *argv[])
{
	cout << "enter the nth term of the series" << endl;

	int n;
	cin >> n;

	cout << "The nth summtion of this series is: " << MultiSquareSeries(n) << endl;

	return 0;
}