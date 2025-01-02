/*

Problem_05 >> Write a Program to read a number a number and print it in a reversed order
Print Digits in a Reverse Order
input>> 
1234

output>>
4
3
2
1

*/

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

void SumDigitsNumber (int Number)
{
	int Sum = 0;
	int Remainder = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Sum += Remainder;
		Number = Number / 10;

	}
	cout <<"The Sum of Digits : "<< Sum;
}

int main()
{
	SumDigitsNumber(CheckPositiveNumber("Enter Positive Number : "));
	return 0;
}
