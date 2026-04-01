#include <iostream>

using namespace std;

int ReadPositive(string Message)
{
	int Number;
	do { cout << Message; cin >> Number; } while (Number < 0); return Number;
}

void PrintReversed(int N)
{
	int N_Reversed;
	while (N > 0)

	{
		N_Reversed = N % 10;

		cout << N_Reversed << endl;

		N = N / 10;
	}
}


int main()
{
	int Read = ReadPositive("Enter a Positive Numbers = ");

	PrintReversed(Read);
	return 0;
}