/*A set of N positive integers is given. You must select from a set
an arbitrary number of numbers so that their sum is as large as possible and is not divisible by 6.
In the answer you need to specify the number of selected numbers and their sum, the numbers themselves should not be displayed.
If it is impossible to get the required amount, it is considered that 0 numbers are selected and their sum is 0.
Write a time-efficient and memory-efficient program to solve this problem.

The program should process all the numbers without saving them,
calculate the total amount and determine the smallest number not a multiple of 6
If the sum is not a multiple of 8, you need all the numbers
If the sum is a multiple of 8, you need to remove the minimum possible
element from it which is the smallest of the given numbers and not a multiple of 8.*/

#include <iostream>
using namespace std;

int main()
{
	int d = 6;
	int max = 2147483646;
	int N, x, sum = 0, min, m;
	cin >> N;
	min = max + 1;
	for (int i = 0; i < N; i++)
    {
		cin >> x;
		sum += x;
		if ((x % d != 0) && (x < min))
		{
			min = x;
		}
	}
	if (sum % d != 0)
	{
		m = N;
	}
	else if (min <= max)
	{
		m = N - 1;
		sum -= min;
	}
	else
	{
		m = 0;
		sum = 0;
	}
	cout << m << " " << sum;
	return 0;
}
