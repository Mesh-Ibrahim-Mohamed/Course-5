#include <iostream>

using namespace std;

int ReadPositive(string Message)
{
	int Number;
	do { cout << Message; cin >> Number; } while (Number < 0); return Number;
}

void ReadArray(int arr[100], int &arrlength)
{
	cout << "\nEnter Number of Elements: ";
	cin >> arrlength;

	cout << "Please Enter Array Elements: \n";

	for (int i = 0; i < arrlength ; i++)
	{
		cout << "Element [" << i + 1 << "] : ";
		cin >> arr[i];
	}

	cout << endl;

}

void PrintArray(int arr[100],int &arrlength)
{
	cout << "\nOriginal Array: ";
	
	for (int i = 0; i < arrlength  ; i++)
	
		cout << arr[i]<< " ";

}

int TimesRepeated(int Number_Times, int arr[100], int arrlength)
{
	int Counter = 0;

	for (int i = 0; i < arrlength; i++)
	{
		

		if (Number_Times == arr[i]) Counter++;
	}
	return Counter;
}

int main()
{
	int N[100], Number, Number_Times;

	ReadArray(N, Number);
	
	Number_Times = ReadPositive("Enter The Number You Want To Check: ");

	PrintArray(N, Number);
	
	cout << "\n" << Number_Times << " is repeated " << TimesRepeated(Number_Times, N, Number) << " Time(S)\n";

	
}