/*This program has to contain a procedure that shows square values of the elements. ({1,2,3,4} -> {1,1,2,4,3,9,4,16}). By
the end of the procedure, the amount of allocated memory should
to increase.*/
#include <iostream>
using namespace std;

int sqr(int x)
{
	return x * x;
}
void arr(int* &x, int y)
{
	int*arr = new int[y];
	for (int i = 0; i < y; i++)
	{
		*(arr + i) = sqr(*(x + i));
	};
	int z = y * 2;
	int* narr = new int[z];
	for (int i = 0; i < z; i++)
	{
		if ((i % 2) == 0)
		{
			*(narr + i) = *(x + (i / 2));
		}
		else
		{
			*(narr + i) = *(arr + ((i - 1) / 2));
		};
	};
	delete[]arr;
	x = narr;
}
int main()
{
	int N;
	cin >> N;
	int* array = new int[N];
	for (int i = 0; i < N; i++)
	{
		cin >> *(array + i);
	};
	arr(array, N);
	N += N;
	for (int i = 0; i < N; i++)
        {
		cout << *(array + i) << " ";
	}
	return 0;
}
