/*A set of N positive integers is given. The program has to calculate the numbers of
which length are the most common in this set and how many numbers of this length there are.
If numbers of different lengths occur equally frequently (and more often than numbers of any other length),
you must choose a longer length.
The program has to be time-efficient and memory-efficient

Effectiveness: array does not make the program memory inefficient, as the size of the array does not depend on n*/

#include <iostream>
using namespace std;

int main() {
	int N, x, max, length, m;
	int *d = new int[100];
	for (int i = 0; i < 100; i++)
        {
		d[i] = 0;
	    }
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> x;
		m = 0;
		while (x > 0)
		{
			m++;
			x /= 10;
		}
		d[m]++;
	}
	max = 0;
	for (int i = 1; i < 100; i++)
	{
		if (d[i] >= max)
		{
			max = d[i];
			length = i;
		}
	}
	cout << length << " " << max;
	return 0;
}
