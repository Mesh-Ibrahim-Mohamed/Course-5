#include <iostream>
using namespace std;

int RandomNumber(int From, int To)
{
	return rand() % (To - From + 1) + From;
}
void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
	cout << "Please Enter Length Of Array : "; cin >> arrLength;
	
	for (int i = 0; i < arrLength; i++)
	{
		int Random = RandomNumber(1, 100);
		 arr[i] = Random ;
	}
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrLength;

	FillArrayWithRandomNumbers(arr, arrLength);

	cout << "\nArray Elements: ";
	PrintArray(arr, arrLength);

	return 0;

}