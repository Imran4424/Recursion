/*
	this is a UVA problem

	10130 - Super Scale	
*/

#include <stdio.h>

int number, people;
int *price, *weight, *canCarry;

int bits[1001];

int Solve(int i, sum)
{
	if (i == number)
	{
		/* code */
	}

	bits[i] = 0;
	int left = Solve(i+1, sum);

	bits[i] = 1;
	int right = Solve(i+1, sum)

}

void ReadCase()
{
	scanf("%d", &number);

	price = new int[number];
	weight = new int[number];

	for (int i = 0; i < number; ++i)
	{
		scanf("%d %d", &price[i], &weight[i]);
	}

	scanf("%d", &people);

	canCarry = new int[people];

	for (int i = 0; i < people; ++i)
	{
		scanf("%d", &canCarry[i]);
	}

}

int main(int argc, char const *argv[])
{
	int test;
	scanf("%d", &test);

	while(test--)
	{
		ReadCase();
	}
	return 0;
}