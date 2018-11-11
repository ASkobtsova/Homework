/*This program has to contain a procedure that removes everything from a dynamically allocated array.
even values ​​(the function takes a pointer to
array and its size as arguments). At the end of the procedure, the amount allocated
memory should decrease.*/
#include <iostream>
using namespace std;

int var(int* x, int y)
{
	int k = 0;
	for (int i = 0; i < y; i++)
	{
		if (((*(x + i)) % 2) == 0)
		{
			k += 1;
		}
    }
	return k;
}
void arr(int* &z, int t)
{
	int w = var(z, t);
	int * arr = new int[t - w];
	int n = 0;
	for (int j = 0; j < t; j++)
	{
		if (((*(z + j)) % 2) != 0)
		{
			*(arr + n) = *(z + j);
			n += 1;
		}
	}

	z = arr;
}
int main()
{
	int N;
	cin >> N;
	int*array = new int[N];
	for (int l = 0; l < N; l++)
	{
		cin >> *(array + l);
	}
	int u = var(array, N);
	arr(array, N);
	cout << endl;
	for (int h = 0; h < (N - u); h++)
	{
		cout << *(array + h) << " ";
	}
	delete[] array;
	return 0;
}
