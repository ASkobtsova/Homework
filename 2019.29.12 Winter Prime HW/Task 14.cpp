/*Write a program that finds for a given sequence (its length's N) of
non-negative integers the maximum sum of its two
items whose numbers differ by at least 5. The program should
be time and memory efficient

The maximum amount of all these pairs will be obtained if the first pair will take the maximum element among all,
from the first and to the element with the number i-5.
This program is effective because as you enter the data, you need to remember
the maximum current value, add each newly entered value with the minimum that
was 5 elements earlier, and choose the maximum of all such amounts, so you need to store only the last 5 maximum, so
you can use an array here.
And since the size of this array does not depend on the total number of elements, the program will be effective.*/

#include <iostream>
using namespace std;
int main()
{
	int m = 0;
	int mx = 0;
	int x;
	int f = 5;
	int N;
	cin >> N;
	int *arr = new int[f - 1];
	for (int i = 0; i < f; i++)
	{
		cin >> x;
		arr[i % f] = x;
	}
	for (int i = f; i < N; i++)
	{
		cin >> x;
		if (arr[i % f] > mx)
        {
			mx = arr[i % f];
		}
		if (x + mx > m) {
			m = x + mx;
			arr[i % f] = x;
		}
	}
	cout << m;
	return 0;
}
