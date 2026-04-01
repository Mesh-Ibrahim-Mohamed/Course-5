#include <iostream>
#include <cmath>

using namespace std;

enum enPrimeNotPrime {Prime = 1, NotPrime = 2};

int ReadPositiveNumber(string Message)
{
	int N;
	do { cout << Message; cin >> N; } while (N <= 1);
	return N;
}

enPrimeNotPrime CheckPrime(int Number)
{
	
		if (Number <= 1)
		return enPrimeNotPrime::NotPrime ;

	for (int i = 2; i <= sqrt(Number); i++)
	{
		if (Number % i == 0)
			return enPrimeNotPrime::NotPrime ;
	}
	
		return enPrimeNotPrime::Prime;
}

void From12N(int N)
{
	cout << "\n";
	cout << "Prime Numbers From " << 1 << " To " << N;
	cout << " are : " << endl;

	for (int i = 1; i <= N; i++)
	{
		if (CheckPrime(i) == enPrimeNotPrime::Prime)
		{
			cout << i << endl;
		}
	}

}

int main()
{
	int Read = ReadPositiveNumber("Please Enter a Positive Number = ");

	From12N(Read);


}