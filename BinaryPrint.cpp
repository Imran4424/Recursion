#include <iostream>
using namespace std;

void Binary(int current, int stop)
{
	if(current == stop)
	{
		return;
	}

	int carry = 1;

	int bin[10], hand;

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
			
		}
	}
}


int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}