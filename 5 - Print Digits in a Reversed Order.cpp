// Print Digits in a Reversed Order

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int CheckPositiveNumber()
{
	int Number;

	do
	{
		cout << "Enter a positive number : ";
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

void DigitsNumber(int Number)
{
	int Remainder = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		cout << Remainder  ; 
	}
}


int main()
{
	DigitsNumber(CheckPositiveNumber());
	return 0;
}