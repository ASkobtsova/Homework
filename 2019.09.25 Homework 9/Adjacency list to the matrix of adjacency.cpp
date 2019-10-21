#include <iostream>
#include <vector>
using namespace std;

void AL_to_MoA(vector<vector<int>> &A, vector<vector<int>> B, int N)
{
	for (int i = 0; i < N; i++)
        {
		for (int j = 0; j < B[i].size(); j++)
		{
			int k = B[i][j];
			A[i][k - 1] = 1;
		}
	}
}
int main() {
	int x, y, z;
	cin >> x;
	vector<vector<int>> list(x);
	for (int i = 0; i < x; i++)
        {
		cin >> z;
		for (int j = 0; j < z; j++)
		{
			cin >> y;
			list[i].push_back(y);
		}
	}
	vector<vector<int>> matrix(x, vector<int>(x));
	AL_to_MoA(matrix, list, x);
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
