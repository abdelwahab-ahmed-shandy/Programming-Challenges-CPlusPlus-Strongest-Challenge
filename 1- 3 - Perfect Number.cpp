// Perfect Number
// perfect Number = all Sum(divisors)

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int CheckPositiveNumber(string Mseeage)
{
	int Number = 0;

	do
	{
		cout << Mseeage;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}
bool IsPrimeNum(int Number)
{
	int Sum = 0;
	for (int i = 1; i < Number; i++)
	{
		if (Number % i == 0)
			Sum = Sum + i;
	}
	return Number == Sum;
}

void PrintCheckPrame(int Number)
{
	if (IsPrimeNum(Number))
		cout << "The " << Number << " Is A Perfect Number" << endl;
	else
		cout << "The " << Number << " Is A Not Perfect Number" << endl;
}

int main()
{
	PrintCheckPrame(CheckPositiveNumber("Enter Positive Number : "));
	return 0;
}
