#include <iostream>

using namespace std;

int ReadPositive(string Message)
{
	int Number;
	do { cout << Message; cin >> Number; } while (Number <= 0); return Number;
}

void FillArrayFrom12N(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = i + 1;
	}
}
void Swap(int& A, int& B)
{
	int Temp ;

	Temp = A;
	A = B;
	B = Temp;

}

int RandomNumber(int From, int To)
{
	return rand() % (To - From + 1) + From;
}

void ShuffleArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		Swap(arr[RandomNumber(1, arrLength) - 1], arr[RandomNumber(1, arrLength) - 1]);
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

	srand((unsigned)time(NULL));

	int arr[100], N;

	N = ReadPositive("Enter a length = ");
	FillArrayFrom12N(arr, N);

	cout << "Orginal Array : ";
	PrintArray(arr, N); cout << endl;
	
	ShuffleArray(arr, N);

	cout << "Shufilld Array = ";	
	PrintArray(arr, N);
	



}