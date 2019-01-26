#include <iostream>
using namespace std;
int main()
{
	int N, t, a, b, x, y, y1, y2;
	cin >> N;
	cin >> t;
	x = 0;
	y = t;
	for (int i = 1; i <= N; i++)
        {
		cin >> a >> b;
		x = x + a;
		y1 = y + b;
		y2 = x + t;
		if (y1 < y2)
		{
			y = y1;
		}

		else
		{
			y = y2;
		}
	}
	cout << y;
	return 0;
}
