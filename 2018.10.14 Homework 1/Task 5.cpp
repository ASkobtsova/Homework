/*This program has to contain functions min, max, avg, med, and swap procedure of 3 real numbers, and also an example of using them.*/

#include <iostream>
using namespace std;

double min(double x, double y, double z)
{
	if ((x <= y) && (x <= z))
	{
		return x;
	}
	else if (y <= z)
	{
		return y;
	}
	return z;
}

double max(double x, double y, double z)
{
	if ((x >= y) && (x >= z))
	{
		return x;
	}
	else if (y >= z)
	{
		return y;
	}
	return z;
}

double avg(double x, double y, double z)
{
	double t = (x + y + z) / 3;
	return t;
}

double med(double x, double y, double z)
{
	if ((x <= y) && (x >= z))
	{
		return x;
	}
	else if ((y <= z) && (y >= x))
	{
		return y;
	}
	return z;
}

void swap(double *x, double *y, double *z) 
{
	double   temp = *x;
	*x = *y;
	*y = *z;
	*z = temp;
}

int main()
{
	double a, b, c;
	cin >> a >> b >> c; 
	cout << "Min: " << min(a, b, c) << endl;
	cout << "Max: " << max(a, b, c) << endl;
	cout << "Avg: " << avg(a, b, c) << endl;
	cout << "Med: " << med(a, b, c) << endl;
	swap(&a, &b, &c);
	cout << "Swap: " << a << " " << b << " " << c << endl;
		
	return 0;
	
}
