// Sum of Digits
#include <iostream>
#include<cmath>
using namespace std;

int CheckPositiveNumber(string Message)
{
	int PositiveNumber;
	do
	{
		cout << Message;
		cin >> PositiveNumber;
	} while (PositiveNumber <=0);
	return PositiveNumber;
}

void DigitsNumber(int Number)
{
	int Sum = 0;
	int Remainder = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Sum += Remainder;
		Number = Number / 10;

	}
	cout << Sum;
}

int main()
{
	DigitsNumber(CheckPositiveNumber("Enter Positive Number : "));
	return 0;
}