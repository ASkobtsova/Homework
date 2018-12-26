
#include <iostream>
using namespace std;
int main()
{
	int N;
	cin >> N;
	int *arr = new int[N];
	for (int i = 1; i < N; i++) {
		arr[i] = -1;
	}
	for (int i = 1; i < N; i++) {
		if (i * i > N)
			break;
		arr[i] = i * i;
	}
	int v = 0, u = 0;
	for (int i = N - 1; i > 0; i--)
        {
		if (arr[i] != -1) {
			if (u + arr[i] <= N)
			{
				while (v + u <= N)
				{
					v += arr[i];
				}
				v -= arr[i];
				u += v;
				cout << v << " ";
			}
		}
		v = 0;
	}
	return 0;
}

