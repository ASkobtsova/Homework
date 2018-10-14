/*This program has to find if the number given is composite or not. The program guarantees that the numbrer is natural*/

#include <iostream>
using namespace std;

int main() 
{
	unsigned int x;
	cin >> x;
	if (x == 1)
	{
		cout << x << ": Unit";
		return 0;
	}
	for (unsigned int i = 2; i < x; i++)
	{
		if (x % i == 0) 
		{
			cout << x << ": Composite";
			return 0;
		}
	}
	cout << x << ": Prime";
	return 0;
}
