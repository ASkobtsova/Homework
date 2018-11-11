/*this program has to contai a procedure that performs a “decompression” of a character dynamic
array, made in the previous task. For example “3a1b5c2d“
should go to “aaabcccccdd”. We can assume that there are no more than nine
the same letters coming in a row.*/

#include <iostream>
using namespace std;

int len(char* a)
{
	int b = 0;
	while (*a++)
	{
		b++;
	};
	return b;
}

int mem(char* a, int b)
{
	int t = 0, k;
	for (int i = 0; i < b; i++)
	{
		if ((i % 2) == 0)
		{
			k = (*(a + i) - '0');
			t += k;
		}
	}
	return t;
}
void decomp(char* &a, int b)
{
	int m = mem(a, b);
	char* arr = new char[m];
	int s, z = 0;;
	for (int i = 0; i < b; i += 2)
	{
		s = (*(a + i) - '0');
		while (s != 0)
		{
			*(arr + z) = *(a + i + 1);
			s -= 1;
			z += 1;
		}
	}
	a = arr;
}
int main()	 {
	int n;
	char* array = new char[1000];
	cin.getline(array, 1000);
	n = len(array);
	int o = mem(array, n);
	decomp(array, n);
	for (int i = 0; i < o; i++)
	{
		cout << *(array + i);
	}
	return 0;
}
