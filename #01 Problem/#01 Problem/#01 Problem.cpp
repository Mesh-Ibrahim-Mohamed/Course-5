#include <iostream>
#include <string>

using namespace std;


int main()
{

	cout << "Multipliction Table From 1 To 10\n\n";
	cout << "    ";

	for (int i = 1; i <= 10; i++)
	{
		cout << i << "\t";
	}
	cout << endl;
	cout << "-----------------------------------------------------------------------\n";

	for (int i = 1; i <= 10; i++)
	{
		if (i < 10) 
			cout << i << "    |  "; 
		else 
			cout << i << "   |  ";

		for (int j = 1; j <= 10; j++)
		{
			cout << " " << i * j << "\t" ;
		}
		cout << endl;
	}
}
