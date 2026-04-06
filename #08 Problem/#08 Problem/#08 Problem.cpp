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
	int Counter = 0,Digit_2;
	
	while (Numbers > 0) 
	{
		Digit_2 = Numbers % 10;

		if (DigitToCheck == Digit_2) Counter++;
		Numbers = Numbers / 10;
	}

	return Counter;

}

int main()
{
	int Number = ReadPositiveNumber("Please Enter The Main Number = ");
	int DigitToCheck = ReadPositiveNumber("Please Enter One Digit To Check = ");

	cout << "\nDigit " << DigitToCheck << " Frequency is "
		<< CountDigitFrequency(DigitToCheck, Number) << " Times(s). \n";

}