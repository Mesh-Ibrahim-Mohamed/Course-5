#include <iostream>

using namespace std;

int ReadPositive(string Message)
{
	int Number;

	do { cout << Message; cin >> Number; } while (Number <= 0);
	return Number;
}

void PrintNumberPattern(int Number)
{
	for (int i = 1; i <= Number; i++)
	{
		for (int j = 1; i >= j; j++)
		{
			cout << i << " ";
		}
		cout << endl;

	}

}
int main()
{
	PrintNumberPattern(ReadPositive("Plesae Enter a Positive Number = "));
}