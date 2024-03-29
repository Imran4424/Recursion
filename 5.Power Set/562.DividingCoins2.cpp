/*
	this is a UVA problem

	562 - Dividing Coins

	this solution will ended up with time limit excedeed status
*/

#include <iostream>
using namespace std;

int size, bits[100], coin[100], setSum[100], total = 0;

int minimum;

int abs(int x)
{
	if (x < 0)
	{
		return -x;
	}

	return x;
}


void Binary(int i, int sum)
{
	if (i == size)
	{
		int sum2 = total - sum;

		int experimentValue = abs(sum - sum2);

		if(minimum > experimentValue)
		{
			minimum = experimentValue;
		}

		return;
	}

	bits[i] = 0;
	Binary(i+1, sum);

	bits[i] = 1;
	Binary(i+1, sum + coin[i]);
}

int main(int argc, char const *argv[])
{
	int test;
	cin >> test;

	while(test--)
	{
		cin >> size;

		for (int i = 0; i < size; ++i)
		{
			cin >> coin[i];

			total += coin[i];
		}

		minimum = total;

		Binary(0, 0);

		cout << minimum << endl;
	}
	return 0;
}