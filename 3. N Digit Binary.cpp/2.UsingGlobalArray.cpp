#include <iostream>
using namespace std;

int bin[100];
int bits;

void Display()
{
	for (int i = 0; i < bits; ++i)
	{
		cout << bin[i] << endl;
	}
}



int main(int argc, char const *argv[])
{
	cout << "enter the number of bits" << endl;
	cin >> bits;



	return 0;
}