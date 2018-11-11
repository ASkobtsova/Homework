/*This program has to calculate the sum of odd digits of an integer number*/

#include <iostream>
using namespace std;

int main()
{
	int x;
	cin >> x;
	int sum = 0;
	while (x != 0)
    {
		if ((x % 10) % 2 == 1)
		{
			sum += (x % 10);
		}
		x /= 10;
	}
	cout << sum;
	return 0;
}
