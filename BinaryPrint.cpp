#include <iostream>
using namespace std;

void Binary(int current, int stop)
{
	if(current == stop)
	{
		return;
	}

	int carry = 1;

	int bin[10], hand, i = 0;

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

		bin[i++] = hand;

		hold /= 10;
	}

	if (1 == carry)
	{
		/* code */
	}
}


int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}