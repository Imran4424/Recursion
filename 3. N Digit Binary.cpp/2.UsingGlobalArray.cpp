#include <iostream>
using namespace std;

int bin[100];
int bits;

void Display()
{
	for (int i = 0; i < bits; ++i)
	{
		cout << bin[i] ;
	}

	cout << endl;
}

void Binary(int i)
{
	if (i == bits)
	{
		Display();

		return;
	}

	/*
		binary has only two digits - 0 1

		that's why this functions recursive call is happening 2 times

		for ternary this type of function call will happen 3 times

		for octal this type of function call will happen 8 times
	*/

	bin[i] = 0;
	Binary(i+1);

	bin[i] = 1;
	Binary(i+1);
}


int main(int argc, char const *argv[])
{
	cout << "enter the number of bits" << endl;
	cin >> bits;

	cout << endl ;

	Binary(0);

	return 0;
}