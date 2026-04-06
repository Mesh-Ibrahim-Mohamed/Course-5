#include <iostream>

using namespace std;

int ReadPositive(string Message)
{
	int Number;

	do { cout << Message; cin >> Number; } while (Number <= 0);
	return Number;
}

void PrintInvertedNumberPattern(int Number)
{
	for (int i = Number; i >= 1; i--)
	{
		for (int j = 0; i > j; j++)
		{
			cout << i << " ";
		}
		cout << endl;

	}

}
int main()
{
	PrintInvertedNumberPattern(ReadPositive("Plesae Enter a Positive Number = "));
}