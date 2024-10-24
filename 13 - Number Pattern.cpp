// 13 - Number Pattern


#include <iostream>
using namespace std;

int CheckPositiveNumber(string Message)
{
    int Number = 0;
	do
	{
		cout << Message;
		cin  >> Number;
	} while (Number <= 0);
	return Number;
}

void PrintNumberPattern(int Number)
{
	for (int i = 0; i <= Number; i++)
	{
		for (int J = 0 ; J < i ; J++ )
		{
			cout << i;
		}
		cout << endl;
	}
}

int main()
{
	PrintNumberPattern(CheckPositiveNumber("Enter Positive Number : "));
	return 0;
}

