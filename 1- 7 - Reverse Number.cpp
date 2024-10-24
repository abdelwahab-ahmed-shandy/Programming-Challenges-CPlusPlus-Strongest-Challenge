// Reverse Number
#include <iostream>
#include <cmath>
using namespace std;

int CheckPositiveNumber(string Message)
{
	int Number;
	do
	{
		cout << Message;
		cin  >> Number;
	} while (Number <= 0);
	return Number;
}

void ReverseNumber(int Num)
{
	int Remainder = 0;
	int Reverse = 0;

	while (Num > 0)
	{
		Remainder = Num % 10;
		Reverse = Reverse * 10 + Remainder;
		Num = Num / 10;
	}

	cout << "The Reverse Numbers : " << Reverse;
}

int main()
{
	ReverseNumber(CheckPositiveNumber("Enter A Positive Number : "));
	return 0;
}

