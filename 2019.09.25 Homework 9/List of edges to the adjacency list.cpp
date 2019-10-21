#include <iostream>
#include <vector>
using namespace std;

void LoE_to_AL(vector<vector<int>> &A, vector<vector<int>> B, int N, int M)
{
	for (int i = 0; i < M; i++) {
			int k = 0;
			int a = B[i][k];
			int b = B[i][k + 1];
			A[a - 1].push_back(b);
			A[b - 1].push_back(a);
		}
}

int main()
{
	int x;
	int y;
	cin >> x >> y;
	vector<vector<int>> list_1(y, vector<int>(2));
		for (int i = 0; i < y; i++)
		{
			for (int j = 0; j < 2; j++)
                {
				cin >> list_1[i][j];
			}
	}
	vector<vector<int>> list_2(x);
	LoE_to_AL(list_2, list_1, x, y);
	for (int i = 0; i < y; i++)
        {
		for (int j = 0; j < list_2[i].size(); j++)
            {
			cout << list_2[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
