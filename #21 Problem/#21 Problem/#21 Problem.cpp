#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int ReadPositive(string Message)
{
	int Number;

	do { cout << Message; cin >> Number; } while (Number < 0);
	return Number;
}

int RandomNumber(int From, int To)
{
	return rand() % (To - From + 1) + From;
}

enum enCharType { SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };

char GetRandomCharacter(enCharType CharType)
{
	switch (CharType)
	{
		{
	case enCharType::SmallLetter:
		return char(RandomNumber(97, 122));
		break;
		}

	case enCharType::CapitalLetter:
	{
		return char(RandomNumber(65, 90));
		break;
	}
	case enCharType::SpecialCharacter:
	{
		return char(RandomNumber(33, 47));
	}
	case enCharType::Digit:
	{
		return char(RandomNumber(48, 57));
	}
	}

}

string GenerateWord(enCharType CharType, short Length)
{
	string Word;

	for (int i = 0; i < Length; i++)
	{
		Word = Word + GetRandomCharacter(CharType);
	}
	return Word;
}

string GenerateKey()
{
	string Key = "";
	
	for (int i = 1; i <= 4; i++)
	{
		if (i != 4)
		Key += GenerateWord(enCharType::CapitalLetter, 4) + "-";
		
		else
			Key += GenerateWord(enCharType::CapitalLetter, 4) ;
	}
	return Key;
}
void Generatekeys(short NumberOfKeys)
{
	

	for (int i = 1; i <= NumberOfKeys; i++)
	{
	
		cout << " [ " << i << " ] " << GenerateKey() << endl;
		
	}
}


int main()
{
	srand((unsigned)time(NULL));
	
	short Read = ReadPositive("Enter a Positive Number : ");

	Generatekeys(Read);
	
	
	return 0;

}