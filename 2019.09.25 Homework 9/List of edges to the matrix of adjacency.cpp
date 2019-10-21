#include <iostream>
using namespace std;

void LoE_to_MoA(int** A, int** B, int N, int M)
{
	for (int i = 0; i < M; i++)
        {
		int j = 0;
			int a, b;
			a = B[i][j];
			b = B[i][j + 1];
			A[a-1][b-1] = A[b-1][a-1] = 1;
	}
}

int main()
{
	int x, y;
	cin >> x >> y;
	int** list = new int*[y];
	for (int i = 0; i < y; i++)
        {
		list[i] = new int[2];
			for (int j = 0; j < 2; j++)
			{
				cin >> list[i][j];
		}
	}
	int** matrix = new int*[x];
	for (int i = 0; i < x; i++)
	{
		matrix[i] = new int[x];
		for (int j = 0; j < x; j++)
		{
			matrix[i][j] = 0;
		}
	}
	LoE_to_MoA(matrix, list, x, y);
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x; j++)
		{
			cout << matrix[i][j] << " ";

		}
		cout << endl;
	}
	return 0;
}
