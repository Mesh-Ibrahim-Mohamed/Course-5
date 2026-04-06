#include <iostream>

using namespace std;

int ReadPositiveNumber(string Meassage)
{
	int Number;
	do
	{
		cout << Meassage;
		cin >> Number;
	} while (Number < 0);
	return Number;
}

int CountDigitFrequency(short DigitToCheck, int Numbers)
{
	int Counter = 0, Digit_2;

	while (Numbers > 0)
	{
		Digit_2 = Numbers % 10;

		if (DigitToCheck == Digit_2) Counter++;
		Numbers = Numbers / 10;
	}

	return Counter;

}

void PrintAllDigitsFrequency(int Number)
{
	for (int i = 0; i < 10; i++)
	{
		short DigitFrequency;

		DigitFrequency = CountDigitFrequency(i, Number);

		if (DigitFrequency > 0)
		{
			cout << "Digit " << i << " Frequency is "
				<< DigitFrequency << " Time(s).\n";
		}
	}

}

int main()
{
	int Read = ReadPositiveNumber("Enter Number = ");

	PrintAllDigitsFrequency(Read);

	return 0;
}