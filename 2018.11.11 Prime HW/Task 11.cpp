/*This program has to remove maximum and minimum elements from the array (if there are several, it has to delete all). At the end of the procedure, the amount of allocated memory.
should decrease.*/
#include <iostream>
using namespace std;

int max(int* a, int b)
{
	int p = *a;
	for (int i = 0; i < b; i++)
	{
		if ((*(a + i)) > p)
		{
			p = *(a + i);
		}
	}
	return p;
}

int min(int* c, int d)
{
	int q = *c;
	for (int i = 0; i < d; i++)
	{
		if ((*(c + i)) < q)
		{
			q = *(c + i);
		}
	}
	return q;
}

int var(int* e, int f)
{
	int w = 0;
	for (int i = 0; i < f; i++)
	{
		if (((*(e + i)) == (min(e, f))) || ((*(e + i)) == (max(e, f))))
		{
			w += 1;
		}
	}
	return w;
}
void arr(int* &a, int b)
{
	int n = var(a, b);
	int* arr = new int[b - n];
	int m = 0;
	for (int i = 0; i < b; i++)
	{
		if (((*(a + i)) != max(a, b)) && ((*(a + i)) != min(a, b)))
		{
			*(arr + m) = *(a + i);
			m += 1;
		}
	}

	a = arr;
}
int main()
{
	int N;
	cin >> N;
	int* array = new int[N];
	for (int i = 0; i < N; i++)
	{
		cin >> *(array + i);
	}
	int f = var(array, N);
	arr(array, N);
	cout << endl;

	for (int i = 0; i < (N - f); i++)
	{
		cout << *(array + i) << " ";
	}

	delete[]array;
	return 0;
}
