/*This program has to find the sum of the elements of the array that are prime numbers*/

#include <iostream>
using namespace std;

bool func(int x)
{
	if (x == 1)
	{
		return 0;
	}
	for (int i = 2; i < x; i++)
        {
		if ((x % i) == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int N, sum = 0;
	cin >> N;
	int *array = new int[N];

	for (int j = 0; j < N; j++)
	{
		cin >> *(array + j);
		if (func(*(array + j)) == 1)
		{
			sum += *(array + j);
		};
	};
	cout << sum;
	return 0;
}
