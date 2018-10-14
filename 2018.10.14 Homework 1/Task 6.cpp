/*This program has to contain the "sort" function for an array of integer numbers and an example of using it. 
Appealing by index (A[i]) is prohibited. There can be not more than 2 arguments in the function*/

#include <iostream>
using namespace std;
void swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
}

void sort(int *p, int N) 
{
	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (*(p + i) > *(p + j))
			{
				swap(*(p + i), *(p + j));
			}
		}
	}
}

int main() 
{
	int N;
	cin >> N;
	int *p = new int[N];
	for (int i = 0; i < N; i++)
	{
		cin >> *(p + i);
	};
	sort(p, arraySize);
	for (int i = 0; i < N; i++)
	{
		cout << *(p + i) << " ";
	};
	return 0;
}
