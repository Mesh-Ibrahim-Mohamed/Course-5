#include <iostream>
#include <cmath>   
#include <ctime>   

using namespace std;

int ReadPositive(string Message)
{
    int Number;
    do { cout << Message; cin >> Number; } while (Number <= 0); return Number;
}
    

int RandomNumber(int From, int To) {
    return rand() % (To - From + 1) + From;
}

void FillArrayWithRandomNumbers(int arr[100], int arrLength) {
 

    for (int i = 0; i < arrLength; i++) {
        arr[i] = RandomNumber(1, 100);
    }
}

void PrintArray(int arr[100], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void SumOf2Arrays(int arr[100], int arr2[100], int arrSum[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        arrSum[i] = arr[i] + arr2[i];
    }
}




int main() {

    srand((unsigned)time(NULL));

    int arr[100], arr2[100], arr3[100];

    int arrLength = ReadPositive("Enter  Length = ");


    FillArrayWithRandomNumbers(arr, arrLength);
    FillArrayWithRandomNumbers(arr2, arrLength);

    
    cout << "\nArray 1 elements: \n";
    PrintArray(arr, arrLength);

    cout << "\nArray 2 elements: \n";
    PrintArray(arr2, arrLength);

    SumOf2Arrays(arr, arr2, arr3, arrLength);

    cout << "\n Sumsissom Of 2 Araay: \n";
    PrintArray(arr3, arrLength);




    return 0;
}