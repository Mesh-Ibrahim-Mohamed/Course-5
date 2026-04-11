#include <iostream>

using namespace std;

int ReadPositive(string Message)
{
	int Number;
	do { cout << Message; cin >> Number; } while (Number <= 0); return Number;
}

int Random(int From, int To)
{
	return rand() % (To - From + 1) + From;
}

void RandomWord()
{
	for (int i = 0; i < 4; i++)
	{
		cout << Random(65, 90) << " ";
	}

}

void GenerateKey()
{
	for (int i = 0; i < 4; i++)
	{
		if (i != 4) { RandomWord(); cout << " - "; }

		else RandomWord();
	}

}

void GenerateKeys(int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		GenerateKey; cout << endl;
	}
}


void PrintArray(int arr[100], int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << " ";
	}
}

int main()
{
	int N = ReadPositive("Enter : ");

	GenerateKeys(N);
}