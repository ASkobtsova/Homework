/*this program has to contain an effective function that writes out from an array of length n all elements whose number of twos in the ternary notation is less than k.
The function has to return the total number of twos in the ternary record of all the array numbers.
The procedure is effective because we simply divide by 3 and find the remainder of division. It's the most effective way.
The effectiveness is O(log n), log n is the number's length*/

#include <iostream>
using namespace std;

int out(int *A, int x, int y)
{
	int sum = 0;
	for (int i = 0; i < x; i++)
	{
		int twos = 0, m = A[i];
		while (m > 1)
		{
			if ((m % 3) == 2)
                {
                twos++;
				sum++;
			    }
			m /= 3;
		}
		if (twos < y)
            {
            cout << A[i] << " ";
            };
	}
	return sum;
}
int main()
{
	int n, k;
	cin >> n;
	cin >> k;
	int *p = new int[n];
	for (int i = 0; i < n; i++)
    {
		cin >> p[i];
	}

	cout << out(p, n, k);
	return 0;
}
