/*This program has to contain a procedure that fills a square two-dimensional array with numbers (like a "snake") counterclockwise, starting from the top
right corner.*/

#include <stdio.h>
using namespace std;

void  arr(int** &a, int b)
{
	b--;
	int c = b, d = 0, n = 1;
	while (c >= d)
	{
		int x = c, y = d;
		while (x > d)
		{
			a[y][x] = n;
			n++;
			x--;
		}
		while (y < c)
		{
			a[y][x] = n;
			n++;
			y++;
		}
		while (x < c)
		{
			a[y][x] = n;
			n++;
			x++;
		}
		while (y > d)
		{
			a[y][x] = n;
			n++;
			y--;
		}
		d++;
		c--;
	}
	if ((b % 2) == 0)
	{
		a[(b / 2)][(b / 2)] = ((b + 1)*(b + 1));
	}
}

int main()
{
	int N;
	scanf("%o", &N);
	int** array = new int*[N];
	for (int t = 0; t < N; t++)
	{
		*(array + t) = new int[N];
	}
	int p = 3;
	if ((N*N) >= 10)
	{
		p += 2;
	}
	arr(array, N);
	for (int i = 0; i < N; i++)	{
		for (int j = 0; j < N; j++)	{
			printf("%*o", p, array[i][j]);
		}
		printf("\n");
	}
}
