/*
	this is a UVA problem

	562 - Dividing Coins

	this solution will ended up with time limit excedeed status
*/

#include <iostream>
using namespace std;

int size, bits[100], members[100], setSum[100], total = 0;

int minimum;

int abs(int x)
{
	if (x < 0)
	{
		return -x;
	}

	return x;
}

void CalculateSetSum()
{
	int sum = 0;

	for (int i = 0; i < size; ++i)
	{
		if (1 == bits[i])
		{
			sum = sum + members[i];
		}
	}

	int sum2 = total - sum;

	int experimentValue = abs(sum - sum2);

	if(minimum > experimentValue)
	{
		minimum = experimentValue;
	}
}

void Binary(int i)
{
	if (i == size)
	{
		CalculateSetSum();

		return;
	}

	bits[i] = 0;
	Binary(i+1);

	bits[i] = 1;
	Binary(i+1);
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
			cin >> members[i];

			total += members[i];
		}

		minimum = total;

		Binary(0);

		cout << minimum << endl;
	}
	return 0;
}