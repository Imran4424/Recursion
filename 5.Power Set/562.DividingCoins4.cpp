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


int  Binary(int i, int sum)
{
	int left, right; // both holding left and right sub tree values

	if (dp[i][sum] >= 0)
	{
		return dp[i][sum];
	}

	if (i == size)
	{
		int sum2 = total - sum;

	
		return dp[i][sum] = abs(sum - sum2);
	}

	bits[i] = 0;
	left = Binary(i+1, sum);

	bits[i] = 1;
	right = Binary(i+1, sum + coin[i]);

	if (left < right)
	{
		return dp[i][sum] = left;
	}
	else
	{
		return dp[i][sum] = right;
	}
}

int main(int argc, char const *argv[])
{
	int test;
	// cin >> test;
	scanf("%d", &test);


	while(test--)
	{
		total = 0; // clearing values for every test case
		Init();

		// cin >> size;
		scanf("%d", &size);

		for (int i = 0; i < size; ++i)
		{
			// cin >> coin[i];
			scanf("%d", &coin[i]);

			total += coin[i];
		}


		minimum = Binary(0, 0);

		cout << minimum << endl;
	}
	return 0;
}