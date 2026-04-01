#include <iostream>

using namespace std;

int ReadPositive(string Message)
{
	int Number;
	do { cout << Message; cin >> Number; } while (Number < 0); return Number;
}

int SumDigits(int Number)
{
	int N_Sum = 0, N_Digit;
	while (Number > 0)

	{
		N_Digit= Number % 10;
		N_Sum += N_Digit;
		Number = Number / 10;
	}
	return N_Sum ;
}


int main()
{
	int Read = ReadPositive("Enter a Positive Numbers = ");

	cout << "\nSum Of Digits = " << SumDigits(Read) << endl;
	return 0;
}