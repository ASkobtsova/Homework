#include <iostream>
using namespace std;

int part(int *A, int l, int q)
{
	if (l != q)
        {
		swap(A[l + rand() % (q - l)], A[q]);
	}
	int x = A[q];
	int i = l - 1;
	for (int j = l; j <= q; j++)
	{
		if (A[j] <= x)
			swap(A[++i], A[j]);
	}
	return i;
}
int find(int *A, int b, int k) {
	int l = 0, q = b;
	for (;;)
        {
		int mid = part(A, l, q);
		if (mid < k) {
			l = mid + 1;
		}
		else if (mid > k) {
			q = mid - 1;
		}
		else return A[k];
	}
}
int main() {
	int N, k;
	cin >> N;
	int *array = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> array[i];
	}
	cin >> k;
	cout << find(array, N, k);
	return 0;
}
