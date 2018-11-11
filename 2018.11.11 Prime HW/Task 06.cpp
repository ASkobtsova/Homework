/*This program has to find all the elements of the sequence,
having at least five dividers*/
#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	int *array = new int[N];
	for (int i = 0; i < N; i++)
        {
		cin >> *(array + i);
        }
	cout << endl;
	for (int j = 0; j < N; j++)
	{
		int a = 0;
		int b = *(array + j);
		for (int j = 1; j <= b; j++)
		{
			if ((b % j) == 0)
			{
				a += 1;
			}
		}
		if (a >= 5)
		{
			cout << b << " ";
		}
	}
	return 0;
}
