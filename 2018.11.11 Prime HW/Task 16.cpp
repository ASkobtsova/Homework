/*This program has to contain a procedure that fills a square two-dimensional array with a pyramid of numbers.*/

#include <iostream>
using namespace std;

void arr(int **&a, int b)
{
	b--;
	int v = b, w = 0, n = 1;
	while (v >= w)
{
		int x = w, y = w;
		while (x < v)
            {
			a[y][x] = n;
			x++;
		}
		while (y < v)
		{
			a[y][x] = n;
			y++;
		}
		while (x > w)
		{
			a[y][x] = n;
			x--;
		}
		while (y > w)
		{
			a[y][x] = n;
			y--;
		}
		w++;
		v--;
		n++;
	}
	if ((b % 2) == 0)
	{
		a[(b / 2)][(b / 2)] = ((b / 2) + 1);
	}
}
int main()
{
	int N;
	cin >> N;
	int **array = new int *[N];
	for (int t = 0; t < N; t++)
	{
		*(array + t) = new int[N];
	}
	arr(array, N);
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << array[i][j] << " ";
		};
		cout << endl;
	}
	return 0;
}
