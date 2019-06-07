#include <iostream>
using namespace std;

void Binary(int current, int stop)
{
	if(current == stop)
	{
		return;
	}

	int carry = 1;

	int bin[10], hand = 0, i = 0;

	int hold = current;

	while(hold != 0)
	{
		int digit = hold % 10;

		if(1 == digit)
		{
			if (1 == carry)
			{
				hand = 0;
				carry = 1; 
			}
			else
			{
				hand = 1;
				carry = 0;
			}
		}
		else if (0 == digit)
		{
			if (1 == carry)
			{
				hand = 1;
				carry = 0;
			}
			else
			{
				hand = 0;
				carry = 0;
			}
		}

		cout << hand << endl;

		bin[i++] = hand;

		hold /= 10;
	}

	if (1 == carry)
	{
		bin[i] = carry;
	}

	current = 0;

	for (int k = i; k >= 0; --k)
	{
		current = (current * 10) + bin[k];
	}

	//cout << current << endl;

	Binary(current, stop);
}


int main(int argc, char const *argv[])
{
	Binary(0, 11);

	return 0;
}