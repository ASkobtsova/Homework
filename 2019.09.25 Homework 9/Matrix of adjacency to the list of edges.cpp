#include <iostream>
using namespace std;

void MoA_to_LoE(int** A, int** B, int N) {
		int k = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				int x = B[i][j];
				if ((i < j) && x == 1) {
					A[k][0] = i + 1;
					A[k][1] = j + 1;
					k++;
				}
			}
		}
}

int main()
{
	int x, y;
	cin >> x >> y;
	int** matrix = new int*[x];
	for (int i = 0; i < x; i++)
        {
		matrix[i] = new int[x];
		for (int j = 0; j < x; j++)
		{
			cin >> matrix[i][j];
		}
	}
	int** list = new int*[y];
	for (int i = 0; i < y; i++)
	{
		list[i] = new int[2];
		for (int j = 0; j < 2; j++)
		{
			list[i][j] = 0;
		}
	}
	MoA_to_LoE(list, matrix, x);
	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << list[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
