/*This program has to count the average of the numerical sequence, whose length is unknown, 
but the last element of the sequence is 0 (and it's the only 0 in it). Using dynamic memory allocation (aka arrays, lists, etc.) is prohibited.*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
	int sum = 0, i = 1, x;
	cin >> x;
	sum = x;
	while (x != 0) 
	{
		cin >> x;
		sum += x;
		i++;
	}
	cout << fixed << setprecision(2);
	cout << (double)sum / i;
	return 0;
}