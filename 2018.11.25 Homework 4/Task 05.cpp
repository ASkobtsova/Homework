/*This program has to contain an effective procedure that finds all elements from the array, whose product of
nonzero digits is greater than k. Array's length is n.
The program is effective because there is only one way to increase efectiveness: to stop multiplying digits when their product is already greater then k*/

#include <iostream>
using namespace std;

void out(int *arr, int x, int y)
{
    for (int i = 0; i < x; i++)
       {
        int f = arr[i];
        int j = 1;
        while (arr[i] >= 1)
        {
            if ((arr[i] % 10) != 0)
            {
                j *= (arr[i] % 10);
            }
               if (j > y)
                {
				cout << f << " ";
				break;
				}
			arr[i] /= 10;
		}
	}
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
	out(p, n, k);
	return 0;
}
