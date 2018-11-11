/*This program has to calculate the sum of the digits of an integer number.*/

#include <iostream>
using namespace std;

int main()
{
long long x, y, sum = 0;
cin >> x;
y = x % 2;
if (y == 0)
{
    while (x != 0)
    {
      if ((x % 10) % 2 == 0)
        {
			sum += (x % 10);
		}
		x /= 10;
    }
}
else if (y == 1)
    {
        while (x != 0)
            {
     if ((x % 10) % 2 == 1)
        {
			sum += (x % 10);
		}
		x /= 10;
            }
    }
    cout << sum;
	return 0;
}
