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

void PrintResult(int Number)
{
	if (CheckPerfectOrNotPerfect(Number))
		cout << Number <<" is Perfect " << endl;
	else
		cout << Number <<" is Not Perfect " << endl;

}

int main()
{
	int Number = ReadPositiveNumber("Please Enter a Positive Number = ");
	PrintResult(Number);
	return 0;
	
}