/*This program has to replace compound numbers with their largest
prime dividers.*/
#include <iostream>
using namespace std;

bool func(int x)
{
	if (x == 1)
	{
		return 0;
	}
	for (int i = 2; i < x; i++)
    {
		if ((x % i) == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int a;
	cin >> a;
	if ((func(a) == 1) || (a == 1))
	{
		cout << a << endl;
		cout << "This number is prime or unit";
	}
	else
	{
		for (int j = a; j >= 2; j--)
		{
			if (((a % j) == 0) && (func(j) == 1))
			{
				a = j;
			};
		};
		cout << a;
	};
	return 0;
}
