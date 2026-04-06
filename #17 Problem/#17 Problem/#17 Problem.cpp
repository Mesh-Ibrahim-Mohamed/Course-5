#include <iostream>

using namespace std;

string ReadPassWord()
{
	string ReadPassWord;

	cout << "Enter your password: ";
	cin >> ReadPassWord;
	return ReadPassWord;
}

bool GuessPasswoed(string OriginalPassword)
{
	string GuessPassword;


	int counter = 0;
	for (int i = 65; i <= 90; i++)
	{
		for (int j = 65; j <= 90; j++)
		{
			for (int k = 65; k <= 90; k++)
			{
				counter++;

				
				GuessPassword += char(i);
				GuessPassword += char(j);
				GuessPassword += char(k);
				if (GuessPassword == OriginalPassword)
				{
					cout << "Your password is: " << GuessPassword  << " After " <<counter <<endl;
					return true;
				}
				GuessPassword = "";
			}
		}
	}
}

int main() {
	string OriginalPassword = ReadPassWord();
	GuessPasswoed(OriginalPassword);
}