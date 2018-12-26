/*This program has to calculate of the polynomial value of x with the Horner scheme*/

#include <iostream>
using namespace std;
int main()
{
	long long int x, N;
	cin >> x >> N;
	long long int *polynome1 = new long long int[N + 1];
	for (long long int i = 0; i < N + 1; i++)
	{
		cin >> polynome1[i];
	};
    long long int polynome2 = polynome1[N];
	for (long long int i = N - 1; i >= 1; i--)
    {
    polynome2 = polynome1[i] + polynome2 * x;
	cout << polynome1[0] + polynome2 * x;
    }
	return 0;
}
