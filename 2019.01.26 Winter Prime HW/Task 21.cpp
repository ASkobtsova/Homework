/*A set of N positive integers is given. It is necessary to determine which digit is most often
found in the decimal notation of the numbers in this set. If
there are several such digits, you need to print them all in descending order (from
the greater to the lesser). Write a program that is efficient in time and memory
to solve this problem

Efectiveness: we can use an array. It doesn't make the program memory inefficient,
because the size of the array does not depend on n*/

#include <iostream>
using namespace std;
int main()
{
	int N, X, number, max;
	int *arr = new int[9];
	for (int i = 0; i < 9; i++)
        {
		arr[i] = 0;
	}
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> X;
		while (X > 0)
		{
			number = X % 10;
			arr[number]++;
			X = X / 10;
		}
	}

	max = 0;
	for (int i = 0; i < 9; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	for (int i = 9; i > 0; i--)
	{
		if (arr[i] == max)
		{
			cout << i << " ";
		}
	}
	return 0;
}
