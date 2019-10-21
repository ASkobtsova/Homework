#include <iostream>
#include <vector>
using namespace std;

void AL_to_LoE(vector<vector<int>> &A, vector<vector<int>> B, int N)
{
	int n = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < B[i].size(); j++)
                {
				int l = B[i][j];
				if ((l < i + 1))
                    {
					A[n][0] = l;
					A[n][1] = i + 1;
					n++;
				}
			}
		}
}

int main()
{
	int x, y, z, t;
	cin >> x >> y;
	vector<vector<int>> list_1(x);
	for (int i = 0; i < x; i++)
        {
		cin >> z;
		for (int j = 0; j < z; j++)
            {
			cin >> t;
			list_1[i].push_back(t);
		}
	}
	vector<vector<int>> list_2(y, vector<int> (2));
	AL_to_LoE(list_2, list_1, x);
	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << list_2[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
