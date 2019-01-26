/*Write a parsing program that finds the minimum sum of two
items of a given sequence (its length's N) whose numbers differ by at least 5. The program can
be ineffective.*/

#include <iostream>
using namespace std;
int min(int a, int b)
{
	if (a < b)
        {
		return a;
	    }
	return b;
}
int minSum(int *arr, int N)
{
	int res = 2147483647;
	for (int i = 0; i < N - 5; i++)
        {
		for (int j = i + 5; j < N; j++)
		{
			res = min(res, arr[i] + arr[j]);
		}
	}
	return res;
}
int main() {
	int N;
	cin >> N;
	int *arr = new int[N];
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	};
	cout << minSum(arr, N);
	return 0;
}
