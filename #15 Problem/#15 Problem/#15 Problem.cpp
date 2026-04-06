#include <iostream>

using namespace std;

int ReadPositive(string Message)
{
	int Number;

	do { cout << Message; cin >> Number; } while (Number <= 0);
	return Number;
}

void PrintletterPattern(int Number)
{
	for (int i =  65; i <= Number + 65 - 1 ; i++)
	{
		for (int j = 0; j < i - 64; j++)
		{
			cout << (char)i << " ";
		}
		cout << endl;

	}

}
int main()
{

	PrintletterPattern(ReadPositive("Plesae Enter a Positive Number = "));
}
