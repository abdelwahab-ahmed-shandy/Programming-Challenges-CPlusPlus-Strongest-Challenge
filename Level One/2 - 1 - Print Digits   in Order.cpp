#include <iostream>
#include <cmath>
#include <string>

using namespace std;


int CheckPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

int  ReverseNumber(int Num)
{
	int Remainder = 0;
	int Reverse = 0;

	while (Num > 0)
	{
		Remainder = Num % 10;
		Reverse = Reverse * 10 + Remainder;
		Num = Num / 10;
	}
	return Reverse;
}

void PrintDigitsNumber(int Number)
{
	int Remainder = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		cout << Remainder << endl ;
	}
}

int main()
{
	PrintDigitsNumber(ReverseNumber(CheckPositiveNumber("Enter positive Number : ")));
	return 0;
}
