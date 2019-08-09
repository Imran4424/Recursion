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
}

void Binary(int i)
{
	if (i == bits)
	{
		Display();

		return;
	}

	a[i] = 0;
	Binary(i+1);

	a[i] = 1;
	Binary(i+1);
}


int main(int argc, char const *argv[])
{
	cout << "enter the number of bits" << endl;
	cin >> bits;

	Binary(0);

	return 0;
}