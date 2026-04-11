#include <iostream>

using namespace std;

int ReadPositive(string Message)
{
	int Number;
	do { cout << Message; cin >> Number; } while (Number <= 0); return Number;
}

int RandomNumber(int From, int To)
{
	return rand() % (To - From + 1) + From;
}


void FillArrayWithRandomNumber(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = RandomNumber(1,arrLength);
	}
}
void Swap(int& A, int& B)
{
	int Temp;

	Temp = A;
	A = B;
	B = Temp;

}



void ReverseArray(int arr[100], int arr2[100], int arrLength)
{
	int index = arrLength - 1;
	for (int i = 0; i < arrLength; i++)
	{
		arr2[i] = arr[index - i];
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

	int arr[100], arr2[100], N;

	N = ReadPositive("Enter a length = ");
	FillArrayWithRandomNumber(arr, N);

	cout << "Orginal Array : ";
	PrintArray(arr, N); cout << endl;

	ReverseArray(arr,arr2 ,N);
	
	cout << "Raversed Array : \n";
	PrintArray(arr2, N);
	cout << "\n";

}