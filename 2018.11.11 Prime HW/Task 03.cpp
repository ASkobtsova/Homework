/*This program has to calculate binomial coefficient Cnk.
The program cannot use numbers that exceed the total.*/

#include <iostream>
using namespace std;
long long Cnk(int x, int y)
{
	if ((y == 0) || (x == y))
        {
		return 1;
	    }
	else
	{
		return (Cnk(x - 1, y) + Cnk(x - 1, y - 1));
	}
}
int main()
{
	int n, k;
	cin >> n >> k;
	if (n >= k)
	{
		cout << Cnk(n, k);
	}
	else
	{
		cout << "Something's wrong";
	};
	return 0;
}
