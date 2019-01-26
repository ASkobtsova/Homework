/*Write a program that finds the minimum product of the items of a given sequence of length N which differ by at least 5.
The program should be effective in time and memory.
The program is effective

The efectiveness is described the same way as in Task 14.*/

#include <iostream>
using namespace std;
int main() {
	int m = 2147483647;
	int mx = 2147483647;
	int x;
	int f = 5;
	int N;
	cin >> N;
	int *arr = new int[f - 1];
	for (int i = 0; i < f; i++)
	{
		cin >> x;
		arr[i % f] = x;
	}
	for (int i = f; i < N; i++)
	{
		cin >> x;
		if (arr[i % f] < mx) {
			mx = arr[i % f];
		}
		if (x * mx < m) {
			m = x * mx;
			arr[i % f] = x;
		}
	}
	cout << m;
	return 0;
}
