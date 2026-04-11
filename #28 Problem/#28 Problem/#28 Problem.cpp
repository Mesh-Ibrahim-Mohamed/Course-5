#include <iostream>

using namespace std;

enum enPrimNotPrime { Prime = 1, NotPrime = 2 };

enPrimNotPrime CheckPrime(int Number)
{
	if (Number <= 1) return enPrimNotPrime::NotPrime;

	for (int i = 2; i <= sqrt(Number); i++)
	{
		if (Number % i == 0) return enPrimNotPrime::NotPrime;
	}
	return enPrimNotPrime::Prime;
	
}


int RandomNumber(int From, int To)
{
	return rand() % (To - From + 1) + From;
}

void FillArrayWithRandomNumbers(int arr[100], int &arrLegnth)
{
	cout << "Enter Array Length : ";
	cin >> arrLegnth;


	for (int i = 0; i < arrLegnth; i++)
	{
		arr[i] = RandomNumber(1, 100);
	}

	
}

void PrintArray(int arr[100], int arrLength)
{
	
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}

}


void CopyOnlyPrimaryNumbers(int arrSource[100], int arrDestination[100], int arrLength, int& arr2Length)
{
	 arr2Length = 0;

	for (int i = 0; i < arrLength; i++)
	{
		if (enPrimNotPrime::Prime == CheckPrime(arrSource[i])) { arrDestination[arr2Length] = arrSource[i]; arr2Length++; }
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arr2[100],arrLength,arrLength2;

	


	FillArrayWithRandomNumbers(arr, arrLength);

	cout << "\nArray 1 elements : ";
	PrintArray(arr, arrLength);
	cout << endl;

	CopyOnlyPrimaryNumbers(arr, arr2, arrLength,arrLength2);

	cout << "\nPrime Number In Array : ";

	PrintArray(arr2, arrLength2);





	return 0;

}