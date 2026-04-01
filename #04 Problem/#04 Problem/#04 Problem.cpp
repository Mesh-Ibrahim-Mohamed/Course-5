#include <iostream>

using namespace std;

int ReadPositiveNumber(string Message)
{
	int n;
	do { cout << Message; cin >> n; } while (n < 0); return n;
}

bool CheckPerfectOrNotPerfect(int n)
{
	int sum = 0;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
			sum += i;
	}
	if (sum == n)
		return true;
	else
		return false;
}

void PrintFrom12N(int N)
{
	for (int i = 1; i <= N; i++)
	{
		if(CheckPerfectOrNotPerfect(i))
		{
			cout << i << endl;
		}
	}
}

int main()
{
	int Read = ReadPositiveNumber("Enter a Positive Number = ");

	PrintFrom12N(Read);

	return 0;
}

