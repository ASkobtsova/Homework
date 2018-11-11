/*This program has to contain a logical function checking is a string palindrome.
We can assume that the word consists only of Latin letters.*/

#include <iostream>
using namespace std;

bool palindrome(char*a, int b)
{
	b--;
	for (int i = 0; i <= ((b / 2) - 1); i++)
        {
		if (a[i] == a[b - i])
		{
			return 1;
		}
	}
	return 0;
}
int len(char* x)
{
	int y = 0;
	while (*x++)
	{
		y++;
	}
	return y;
}
int main() {
	int p;
	char* array = new char[1000];
	cin.getline(array, 1000);
	p = len(array);
	cout << endl;
	if (palindrome(array, p) == 1)
        {
		cout << "This is a palindrome";
	}
	else
	{
		cout << "This is not a palindrome";
	}
	return 0;
}
