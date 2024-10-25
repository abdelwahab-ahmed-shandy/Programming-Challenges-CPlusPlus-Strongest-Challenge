// 16 - All Words From AAA To ZZZ

#include <iostream>
using namespace std;

void AllWords()
{
	for (char i = 65 ; i <= 90; i++)
	{
		for (char J = 65 ; J <= 90 ; J++)
		{
			for (char L = 65; L <= 90; L++)
			{
				cout << i << J << L << endl;
			}
		}
	}
}

int main()
{
	AllWords();
	return 0;
}
