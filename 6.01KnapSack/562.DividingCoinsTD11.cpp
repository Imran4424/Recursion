/*
	this is a UVA problem

	562 - Dividing Coins

	this solution is accepted

	here we used dynamic programming top down approach

	Runtime: 0.070s
*/

#include <iostream>
#include <stdio.h>
using namespace std;

const int  mSize = 101; // cause 100 coins
const int sizeSum = 50001; // cause highest subset value is 500 * 100 = 50000

int dp[mSize][sizeSum];

int size, bits[mSize], coin[mSize], setSum[mSize], total;

int minimum;

void Init() // initializing the dp
{
	for (int i = 0; i <= size; ++i) // initialize only the required size
	{
		for (int j = 0; j <= total; ++j)
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
		int sum2 = total - sum; // calculating the other half

		int experimentValue = abs(sum - sum2); // calculating the difference

		if(minimum > experimentValue) // checking if it is less than the current minimum or not
		{
			minimum = experimentValue;
		}
		
		dp[i][sum] = experimentValue; // storing the difference in the current node

		return;
	}

	bits[i] = 0;
	Binary(i+1, sum);
	int left = dp[i+1][sum]; // for storing left sub tree subset sum
				//  left sub tree will be next iteration i
	                       //   and sum wil be the trown sum
			      //    thrown sum is sum because this digit is 0

	bits[i] = 1;
	Binary(i+1, sum + coin[i]);
	int right = dp[i+1][sum + coin[i]]; // for storing right sub tree subset sum
			                   //  right sub tree will be next iteration i
	                                  //   and sum wil be the trown sum
				         //    thrown sum is sum + coin[i] because this digit is 1


	/*
		for this node

		we have to subsetsum

		left subtree subset sum
		right subtree subset sum

		we will consider the minimum of both left and right subtree subset sum

		for this node and store it for future use
	*/

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

		// cin >> size;
		scanf("%d", &size);

		for (int i = 0; i < size; ++i)
		{
			// cin >> coin[i];
			scanf("%d", &coin[i]);

			total += coin[i];
		}

		Init();
		minimum = total;

		Binary(0, 0);

		cout << minimum << endl;
	}
	return 0;
}