/*This program has to allow you to effectively check the ownership of a pair of values to the array.
For example, the pair (2,3) belongs to the array [1,2,3,5,7,11,13,17], and the pair (3,4) does not.
You can assume that the number of requests is many times the size of the array */

#include <iostream>
using namespace std;

bool func(int *p, int n, int x, int t, int s = 0)
{
	if (p[(t + s) / 2] == x) {
		return true;
	}
	if (t - s <= 1)
        {
		return false;
	}
	if (p[(s + t) / 2] > x)
        {
		func(p, n, x, (s + t) / 2, s);
	}
	if (p[(s + t) / 2] < x)
	{
		func(p, n, x, t, (s + t) / 2);
	}
}
int main()
{
	int N;
	cin >> N;
	int *p = new int[N];
	for (int i = 0; i < N; i++)
        {
		cin >> p[i];
	    }
	int a, b;
	cin >> a >> b;
	if (func(p, N, a, N) && func(p, N, b, N) == true)
		cout << "YES";
	else cout << "NO";
	return 0;
}
