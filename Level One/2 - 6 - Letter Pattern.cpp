// 15 - Letter Pattern

#include <iostream>
using namespace std;

int CheckPositiveNum()
{
	int Num = 0;
	do
	{
		cout << "Enter Positive Number : ";
		cin >> Num;
	} while (Num <= 0);
	return Num;
}

void LetterPattern(int Number)
{
	for (int i = 65   ; i <= Number + 65 - 1  ; i++)
	{
		for (int  J = 1; J <= i -65 +1  ; J++)
		{
			cout << char(i);
		}
		cout << endl;
	}
}

int main()
{
	LetterPattern(CheckPositiveNum());
	return 0;
}
