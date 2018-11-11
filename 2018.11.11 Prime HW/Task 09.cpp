/*This program has to find the root of the function f, if it is known that f is
monotonous. We assume that the function f is not known (i.e. it simply returns the value
by argument). It is reasonable to use a cubic function for debugging.*/
#include <iostream>
using namespace std;

double func(double x)
    {
	return (x * x * x - 3);
	}

	bool sign(double x)
	{
	return (x >= 0);
}
int main()
{
	double n, m = 0, k = 100, i = (m - k), j = (m + k);
	cin >> n;
	while (sign(func(i)) == sign(func(j)))
	{
		i -= k;
		j += k;
	}
	double l = (j - i);
	while ((func(m) != 0) && (sign(func(m - n)) == sign(func(m + n))))
	{
		l /= 2;
		if (sign(func(i)) != sign(func(m)))
		{
			j -= l;
			m -= (l / 2);
		}
		else
		{
			i += l;
			m += (l / 2);
		}
	}

	cout << m;
	return 0;
}
