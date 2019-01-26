/*Write a parsing program that finds the maximum product of two of items of a given sequence (its length's N)
whose numbers differ by at least 5. The program can be ineffective*/

#include <iostream>
using namespace std;

int max(int x, int y)
{
	if (x > y)
    {
		return x;
	}
	return y;
}
int maxM(int *arr, int N)
{
	int res = 0;
	for (int i = 0; i < N - 5; i++)
        {
		for (int j = i + 5; j < N; j++)
		{
			res = max(res, arr[i] * arr[j]);
		}
	}
	return res;
}
int main()
{
	int N;
	cin >> N;
	int *arr = new int[N];
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	};
	cout << maxM(arr, N);
	return 0;
}
