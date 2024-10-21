// Perfect Number
// perfect Number = all Sum(divisors)

#include <iostream>
#include <cmath>
#include <string>
using namespace std;


int CheckPositiveNumber (string Message)
{
	int Number = 0;
	do
	{
		cout << Message;
		cin  >> Number;
	} while (Number <= 0);
	return Number;
}

bool IsPerfectNumber(int Num)
{
	int Sum = 0;
	for (int i = 1 ; i < Num; i++)
	{
		if (Num % i == 0)
			Sum += i;
	}
	return Num == Sum;
}

void PrintResult(int Number)
{
	if (IsPerfectNumber(Number))
		cout <<"The " << Number << " Is Perfect Number .\n";
	else 
		cout << Number << " Is Not Perfect Number .\n";
}

int main()
{
	PrintResult(CheckPositiveNumber("Enter a positive Number : "));
	return 0;
}
