/*This program has to convert a number into a number system with the base k, where k does not exceed 30.*/

#include <iostream>
using namespace std;

int main()
{
	int N, k;
	cin >> N >> k;
	int *A = new int[10];
	char B[26];
	int *C = new int[10];
	for (int i = 0; i < 10; i++)
        {
		A[i] = -1;
	}
	for (char i = 'a'; i <= 'z'; ++i)
        {
		B[i - 'a'] = i;
	    }
	if (k > 10) {
		for (int i = 9; N > k; i--)
		{
			if (N % k >= 10)
			{
				A[i] = -2;
				C[i] = N;
			}
			else
				A[i] = N % k;
			N /= k;
		}
		A[0] = N;
		for (int i = 0; i < 10; i++)
		{
			if (A[i] != -1)
				if (A[i] == -2)
				{
					cout << B[C[i] % k - 10];
				}
				else
					cout << A[i];
		}
	}
	else {
		for (int i = 9; N >= k; i--)
		{
			A[i] = N % k;
			N /= k;
		}
		A[0] = N;
		for (int i = 0; i < 10; i++)
		{
			if (A[i] != -1)
				cout << A[i];
		}
	}
	return 0;
}
