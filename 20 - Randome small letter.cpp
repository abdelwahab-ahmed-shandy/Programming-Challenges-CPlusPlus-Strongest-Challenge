// 20 - Randome small letter, capital letter , special , and digit in order 

#include <iostream>
#include <cstdlib>
using namespace std;

int RandomNumber(int Start, int End)
{
	//Generate a Random Number

	int RandomNum = rand() % (End - Start + 1) + Start;
	return RandomNum;
}

enum  enRandomeType {
	SmallLetter = 1 ,
	CapitaLetter = 2 ,
	SpecialChar = 3 ,
	Digit = 4		};

char GetRandome(enRandomeType Chartype)
{
	switch (Chartype)
	{
	case enRandomeType::SmallLetter:
		return char(RandomNumber(97, 122));
		break;
	case enRandomeType::CapitaLetter:
		return char(RandomNumber(65, 90));

		break;
	case enRandomeType::SpecialChar:
		return char(RandomNumber(33, 57));
		break;
	case enRandomeType::Digit:
		return char(RandomNumber(48, 57));
		break;
	default:
		break;
	}
}


int main()
{
	srand((unsigned)time(NULL));

	cout << GetRandome(enRandomeType::SmallLetter) << endl;
	cout << GetRandome(enRandomeType::CapitaLetter) << endl;
	cout << GetRandome(enRandomeType::SpecialChar) << endl;
	cout << GetRandome(enRandomeType::Digit) << endl;

	return 0;
}