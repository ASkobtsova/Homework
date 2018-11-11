/*This program has to contain two functions that find the approximate values of square and
cubic roots. Using math libraries is prohibited*/
#include <iostream>
using namespace std;

double sqrt(double a)
{
	double x;
	double y = 0.001;
	for (double i = 0; 0 == 0; i += y)
	{
		if (((i * i) <= a) && (((i + y) * (i + y)) >= a))
		{
			x = i;
			break;
		};
	};
	x *= (1 / y);
	long long z = (long long)x + 1;
	int p = (z % 10);
	if (p >= 5)
	{
		z -= p;
		z += 10;
	}
	else
	{
		z -= p;
	};
	x = (z / 10);
	x *= (y * 10);
	return x;
}
double cbt(double a)
{
	double x;
	double y = 0.001;
	for (double i = 0; 0 == 0; i += y)
	{
		if ((i * i * i <= a) && ((i + y) * (i + y) * (i + y) >= a))
		{
			x = i;
			break;
		};
	};
	x *= (1 / y);
	long long z = (long long)x + 1;
	int p = (z % 10);
	if (p >= 5)
	{
		z -= p;
		z += 10;
	}
	else
	{
		z -= p;
	};
	x = (z / 10);
	x *= (y * 10);
	return x;
}


int main()
{
	long long m;
	cin >> m;
	cout << sqrt(m) << endl;
	cout << cbt(m) << endl;
}
