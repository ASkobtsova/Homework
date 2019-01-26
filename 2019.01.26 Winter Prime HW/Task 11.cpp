/*An array containing N non-negative integers is given. This program has to find
the number of elements of this array
that are less than twice the value of the preceding element.*/

#include <iostream>
using namespace std;
int main()
{
	int N;
	int m = 0;
	cin >> N;
	int *arr = new int[N];
	for (int i = 0; i < N; i++)
        {
		cin >> arr[i];
	    }
	for (int i = 0; i < N; i++)
	{
		if (arr[i] * 2 > arr[i-1])
		{
			m++;
		}
	}
	cout << m;
	return 0;
}
