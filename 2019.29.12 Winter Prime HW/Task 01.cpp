/*The performer has a Doubler-Triple commands, which are:
1. Add 1
2. Multiply by 2
3. Multiply by 3.
The program itself is a command sequence. Write a program that calculates how much
there are programs that convert the number X to the number Y.*/

#include <iostream>
using namespace std;
int main()
{
	int x, y;
	cin >> x >> y;
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
		else if ((i % 2 == 0) && (i % 3 == 0))
		{
			a[i] = a[i - 1] + a[i / 2] + a[i / 3];
		}
        else if ((i % 2 != 0) && (i % 3 == 0))
		{
			a[i] = a[i - 1] + a[i / 3];
		}
		else if ((i % 2 == 0) && (i % 3 != 0))
		{
			a[i] = a[i-1] + a[i/2];
		}
		else if ((i % 2 != 0) && (i % 3 != 0))
		{
			a[i] = a[i - 1];
		}
	}
	cout << a[y];
	return 0;
}
