/*This program has to contain a boolean function to check if a single line is
an anagram of another line . The line consists only of Latin letters.*/

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
bool arr(char* x, int y, char* z, int q)
{
	if (y != q)
	{
		return 0;
	}
	else
	{
		for (int i = 0; i < y; i++)
		{
			int u = 0;
			for (int j = 0; j < q; j++)
			{
				if (*(x + i) == *(z + j))
				{
					int k = j, p = 0;
					char* arr = new char[q - 1];
					while (p < (q - 1))
					{
						for (j = 0; j < q; j++)
						{
							if (j != k)
							{
								*(arr + p) = *(z + j);
								p++;
							}
						}
					}
					z = arr;
					u++;
				}
			}
			if (u == 0)
			{
				return 0;
			}
		}
		return 1;
	}
}
int main()
{
	int v, w;
	char* array = new char[1000];
	cin.getline(array, 1000);
	v = len(array);

	char* t = new char[1000];
	cin.getline(t, 1000);
	w = len(t);
	cout << endl;
	if (arr(array, v, t, w) == 1)
	{
		cout << "This is an anagram";
	}
	else
	{
		cout << "This is not an anagram";
	}
	return 0;
}
