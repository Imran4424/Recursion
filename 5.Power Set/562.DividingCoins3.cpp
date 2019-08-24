/*
	this solution will ended up with time limit excedeed status
*/

#include <iostream>
using namespace std;

const mSize = 101;
const sizeSum = 50001;

int size, bits[mSize], coin[mSize], setSum[mSize], total = 0;

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
		int experimentValue = abs(total - sum);	

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