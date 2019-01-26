/*There is a data set consisting pairs of positive integers.
This program has to select exactly one number from each pair so that the sum of all
the selected numbers was not divisible by 3 and was as large as possible.
If it is impossible to get the required amount, the answer should be 0.*/

#include <iostream>
using namespace std;
int main()
{
	int res = 2147483646;
	int N, A, B, max, min, sum = 0, mm;
	mm = res + 1;
	cin >> N;
	for (int i = 0; i < N; i++)
        {
		cin >> A >> B;
		if (A > B)
		{
			max = A;
			min = B;
		}
		else
		{
			max = B;
			min = A;
		}
		sum += max;
		if (((max - min) % 3 != 0) && (max - min < mm))
		{
			mm = max - min;
		}
	}
	if (sum % 3 == 0)
	{
		if (mm > res)
		{
			sum = 0;
		}
		else {
			sum -= mm;
		}
	}
	cout << sum;
	return 0;
}
