/*An integer array of N elements is given. This program has to
find and print the product of the array elements that have odd
the value and are divided by 3. It is guaranteed that the source array has at least
one element whose value is odd and a multiple of 3. The program must be
effective in time and memory.*/

#include <iostream>
using namespace std;

int main()
{
	int N, mult = 1;
	cin >> N;
	int *a = new int[N];
	for (int i = 0; i < N; i++)
        {
		cin >> a[i];
	    }
	for(int i = 0; i < N; i++)
	{
		if ((a[i] % 2 != 0) && (a[i] % 3 == 0))
            {
			mult *= a[i];
		    }
	}
	cout << mult;
	return 0;
}
