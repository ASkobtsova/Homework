/*The performer has four commands, which are:
1. Add 5
2. Multiply by X
3. Multiply by 3
4. Add 2 at the end
The first of them increases the initial number x by 5, the second translates the number x to the number x*x,
the third multiplies this number by 3,
the fourth adds 2 to the number in the end.
Executive program is a sequence of commands. This program has to check whether it is possible
the sequence of commands to get the number Y from X so that
the intermediate actions do not contain the number Z.*/

#include <iostream>
#include <cmath>
using namespace std;
bool sqr(long long n)
{
	long long squareRootN = (long long)(sqrt((double)n) + 0.5);
	return squareRootN * squareRootN == n;
}
int main() {
	int x, y, z;
	cin >> x >> y >> z;
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
		else if (i == z)
		{
			a[i] = 0;
		}
		else if ((sqr(i) == true) && (i % 3 == 0) && (i % 10 == 2))
		{
			a[i] = a[i - 5] || a[(int)sqrt(i)] || a[i / 3] || a[(i - 2) / 10];
		}
		else if ((sqr(i) == true) && (i % 3 == 0) && (i % 10 != 2))
		{
			a[i] = a[i - 5] || a[(int)sqrt(i)] || a[i / 3];
		}
		else if ((sqr(i) == true) && (i % 3 != 0) && (i % 10 == 2))
		{
			a[i] = a[i - 5] || a[(int)sqrt(i)] || a[(i - 2) / 10];
		}
		else if ((sqr(i) == true) && (i % 3 != 0) && (i % 10 != 2))
		{
			a[i] = a[i - 5] || a[(int)sqrt(i)];
		}
		else if ((sqr(i) == false) && (i % 3 != 0) && (i % 10 != 2))
		{
			a[i] = a[i - 5];
		}
		else if ((sqr(i) == false) && (i % 3 == 0) && (i % 10 == 2))
		{
			a[i] = a[i - 5] || a[i / 3] || a[(i - 2) / 10];
		}
		else if ((sqr(i) == false) && (i % 3 == 0) && (i % 10 != 2))
		{
			a[i] = a[i - 5] || a[i / 3];
		}
		else if ((sqr(i) == false) && (i % 3 != 0) && (i % 10 == 2))
		{
			a[i] = a[i - 5] || a[(i - 2) / 10];
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
