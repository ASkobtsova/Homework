#include <iostream>
#include <vector>
using namespace std;

void MoA_to_AL(vector<vector<int>> &A, vector<vector<int>> B, int N)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
            {
			int k = B[i][j];
			if (k == 1) {
				A[i].push_back(j + 1);
			}
		}
	}
}

int main()
{
	int x;
	cin >> x;
	vector<vector<int>> matrix(x, vector<int>(x));
	for (int i = 0; i < x; i++)
        {
		for (int j = 0; j < x; j++)
		{
			cin >> matrix[i][j];
		}
	}
	vector<vector<int>> list(x);
	MoA_to_AL(list, matrix, x);
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < list[i].size(); j++)
		{
			cout << list[i][j];
		}
		cout << endl;
	}
	return 0;
}
