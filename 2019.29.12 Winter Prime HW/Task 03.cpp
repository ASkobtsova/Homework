/*The performer has four commands, which are:
1. Add 9
2. Multiply by X
3. Multiply by 7
4. Add 1 to the end
The first of them increases by 9 the initial number x, the second translates the number x to the number x*x,
the third multiplies this number by 7, the fourth adds 1 to the number in
the end (for example, the number is 30, then it turns to 301). Executive program is a sequence of commands.
This program has to check whether it is possible
the sequence of commands to get number Y from number X with these commands.*/

#include <iostream>
#include <cmath>
using namespace std;

bool sqr(long long n)
{
	long long squareRootN = (long long)(sqrt((double)n) + 0.5);
	return squareRootN * squareRootN == n;
}
int main()
{
	int x, y;
	cin >> x >> y;
	bool *a = new bool[y + 1];
	for (long long i = 0; i <= y; i++)
        {
		if (i == x)
		{
			a[i] = 1;
		}
		else if (i <= x)
		{
			a[i] = 0;
		}
		else if ((sqr(i) == true) && (i % 7 == 0) && (i % 10 == 1))
		{
			a[i] = a[i - 9] || a[(int)sqrt(i)] || a[i / 7] || a[(i - 1) / 10];
		}
		else if ((sqr(i) == true) && (i % 7 != 0) && (i % 10 != 1))
		{
			a[i] = a[i - 9] || a[(int)sqrt(i)];
		}
		else if ((sqr(i) == false) && (i % 7 != 0) && (i % 10 != 1))
		{
			a[i] = a[i - 9];
		}
		else if ((sqr(i) == true) && (i % 7 != 0) && (i % 10 == 1))
		{
			a[i] = a[i - 9] || a[(int)sqrt(i)] || a[(i - 1) / 10];
		}
		else if ((sqr(i) == true) && (i % 7 == 0) && (i % 10 != 1))
		{
			a[i] = a[i - 9] || a[(int)sqrt(i)] || a[i / 7];
		}
		else if ((sqr(i) == false) && (i % 7 == 0) && (i % 10 == 1))
		{
			a[i] = a[i - 9] || a[i / 7] || a[(i - 1) / 10];
		}
		else if ((sqr(i) == false) && (i % 7 == 0) && (i % 10 != 1))
		{
			a[i] = a[i - 9] || a[i / 7];
		}
		else if ((sqr(i) == false) && (i % 7 != 0) && (i % 10 == 1))
		{
			a[i] = a[i - 9] || a[(i - 1) / 10];
		}

	}
	if (a[y] == 1)
        {
		cout << "YES";
	    }
	else
	{
		cout << "NO";
	}
	return 0;
}
