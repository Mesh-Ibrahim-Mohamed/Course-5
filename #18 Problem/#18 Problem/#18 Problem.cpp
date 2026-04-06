#include <iostream>
#include <string>
using namespace std;

string ReadText() {
	string text;
	cout << "Enter a string: ";
	
	getline(cin, text);
	return text;
}

string EncryptText(string Text, short EncryptionKey)
{
	string Encrypt;
	for (int i = 0; i < Text.length(); i++)
	{
		Text[i] = Text[i] + EncryptionKey;

	}

	return Text;
}

string DecryptText(string Text, short EncryptionKey)
{
	string Dncrypt;
	for (int i = 0; i < Text.length(); i++)
	{
		Text[i] = Text[i] - EncryptionKey;

	}

	return Text ;
}

int main()
{
	const short EncryptionKey = 2;

	string Text = ReadText();
	string TextAfterEncryption = EncryptText(Text, EncryptionKey);
	string TextAfterDcryption = DecryptText(TextAfterEncryption, EncryptionKey);

	cout << "\nText Before Encryption : " << TextAfterEncryption;
	cout << "\nText Before Decryption : " << TextAfterDcryption << endl;
	return 0;

}