#include <iostream>
#include <chrono>

using namespace std;

void PrintWordsFromAAAtoZZZ()
{
	int counter = 0;
	string word;

	auto start = chrono::high_resolution_clock::now();

	for (char i = 'A'; i <= 'Z'; i++)
	{
		for (char j = 'A'; j <= 'Z'; j++)
		{
			for (char k = 'A'; k <= 'Z'; k++)
			{
				counter++;
				
				word = word + char(i);
				word = word + char(j);
				word = word + char(k);
			
				cout << word << endl;
				word = "";
			}
		}


	}

	auto end = chrono::high_resolution_clock::now();

	chrono::duration<double> duration = end - start;

	cout << "====================================\n";
	cout << "Done! Total Words: " << counter << endl;
	cout << "Time consumed: " << duration.count() << " seconds" << endl;
	cout << "====================================\n";

}

int main()
{
	PrintWordsFromAAAtoZZZ();
	return 0;
}