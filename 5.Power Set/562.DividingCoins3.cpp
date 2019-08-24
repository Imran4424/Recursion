/*
	this solution is accepted
*/

#include <iostream>
#include <stdio.h>
using namespace std;

const int  mSize = 101;
const int sizeSum = 50001;

int dp[mSize][sizeSum];

int size, bits[mSize], coin[mSize], setSum[mSize], total;

int minimum;

void Init()
{
	for (int i = 0; i < mSize; ++i)
	{
		for (int j = 0; j < sizeSum; ++j)
		{
			dp[i][j] = -1;
		}
	}
}

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
	if (dp[i][sum] >= 0)
	{
		return;
	}

	if (i == size)
	{
		int sum2 = total - sum;

		int experimentValue = abs(sum - sum2);

		if(minimum > experimentValue)
		{
			minimum = experimentValue;
		}
		
		dp[i][sum] = experimentValue;

		return;
	}

	bits[i] = 0;
	Binary(i+1, sum);
	int left = dp[i+1][sum];

	bits[i] = 1;
	Binary(i+1, sum + coin[i]);
	int right = dp[i+1][sum + coin[i]];

	if (left < right)
	{
		dp[i][sum] = left;
	}
	else
	{
		dp[i][sum] = right;
	}
}

int main(int argc, char const *argv[])
{
	int test;
	// cin >> test;
	scanf("%d", &test);


	while(test--)
	{	
		// clearing values for every test case
		total = 0;
		Init();

		// cin >> size;
		scanf("%d", &size);

		for (int i = 0; i < size; ++i)
		{
			// cin >> coin[i];
			scanf("%d", &coin[i]);

			total += coin[i];
		}

		minimum = total;


		Binary(0, 0);

		cout << minimum << endl;
	}
	return 0;
}