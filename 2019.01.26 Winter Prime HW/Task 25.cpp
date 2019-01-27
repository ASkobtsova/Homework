/*The input of the program is a sequence of N positive integers, all numbers in the sequence are different.
The program has to work with pairs of different elements of the sequence at a distance of not less than 4 (the difference
in the indices of the elements of the pair must be 4 or more, the order of the elements in the pair is unimportant).
The program has to determine the number of such pairs for which the product of the elements is divided by 38.*/

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	int n, q = 0, j;
	cin >> n;
	int* A = new int[n];
	for (int i = 0; i < n; i++)
		cin >> A[i];
	for (int i = 0; i < n - 4; i++)
	{
		j = i + 4;
		while (j < n)
		{
			if ((A[i] * A[j]) % 38 == 0)
				q++;
				j++;
		};
	};
	cout << q;
	return 0;
}
