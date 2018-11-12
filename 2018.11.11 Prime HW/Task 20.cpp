/*This program has to contain a procedure that removes unnecessary spaces "   " from a dynamically allocated string.
The memory should increase.*/

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;
int ch(char* a, int b)
{
	int n = 0;
	for (int i = 0; i < b; i++)
	{
		if (*(a + i) == ' ')
		{
			if (i == 0)
			{
				n++;
			}
			else
			{
				if (i == (b - 1))
				{
					n++;
				}
				else
				{
					if (*(a + i + 1) == ' ')
					{
						n++;
					}
				}
			}
		}
	}
	return n;
}

int len(char* a)
{
	int b = 0;
	while (*a++)
	{
		b++;
	};
	return b;
}
void arr(char* &c, int d)
{
	int q = ch(c, d);
	int k = (d - q);
	char* arr = new char[k];

	int i = 0, j = 0;;
	while (j < d)
	{
		if (i == k) break;
		if ((*(c + j)) != ' ')
		{
			*(arr + i) = *(c + j);
			i++;
		}
		else
		{
			if (j != 0)
			{
				if (*(c + j - 1) != ' ')
				{
					*(arr + i) = *(c + j);
					i++;
				}
			}
		}
		j++;
	}
	c = arr;
}
int main()
{
	int N;
	char*s = new char[1000];
	gets(s);
	N = len(s);
	int x = ch(s, N);
	arr(s, N);
	int i = 0;
	while (i < (N - x))
	{
		if (*(s + i) != ' ')
            {
                cout << *(s + i);
        };
		if (*(s + i) == ' ')
        {
                cout << " ";
        };
		i++;
	}
}
