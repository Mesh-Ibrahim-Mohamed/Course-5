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
	for (char i = 65 + Number - 1; i >=65; i--)
	{
		for (int j = 1; j <= Number - (65 + Number -1 - i); j++)
		{
			cout << (char)i << " ";
		}
		cout << endl;

	}

}
int main()
{

	PrintInvertedNumberPattern(ReadPositive("Plesae Enter a Positive Number = "));
}
