/*The performer has four commands, which are:
1. Add 1
2. Make it even
3. Make it odd
4. Multiply by 10
The first of them increases by 1 the initial number x, the second multiplies this number by
2, the third translates the number x to 2x + 1, the fourth multiplies it by 10.
A program for an executor is a sequence of commands. This program has to calculate
how many programs exist that are converting number X to the number Y,
such that no intermediate actions occur the number Z.*/

#include <iostream>
using namespace std;
int main()
{
	int x, y, z;
	cin >> x >> y >> z;
	long long *a = new long long[y + 1];
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
		else if ((i % 2 != 0) && (i % 10 == 0))
		{
			a[i] = a[i - 1] + a[(i - 1) / 2] + a[i / 10];
		}
		else if ((i % 2 != 0) && (i % 10 != 0))
		{
			a[i] = a[i - 1] + a[(i - 1) / 2];
		}
		else if ((i % 2 == 0) && (i % 10 == 0))
		{
			a[i] = a[i - 1] + a[i / 2] + a[i / 10];
		}
		else if ((i % 2 == 0) && (i % 10 != 0))
		{
			a[i] = a[i - 1] + a[i / 2];
		}
	}
	cout << a[y];
	return 0;
}
