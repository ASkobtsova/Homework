/*This program has to contain a procedure for compressing a character dynamically allocated
array. Several consecutive identical letters must be replaced by their
the number and the letter itself. For example, the string “aaabcccccdd” should go to
“3a1b5c2d”. We can assume that there are no more than nine identical letters going
contract.*/

#include <iostream>
using namespace std;

int var(char* a, int b)
{
	int k = 1;
	for (int i = 0; i < (b - 1); i++)
        {
		if ((*(a + i)) != (*(a + i + 1)))
            {
			k += 1;
		    }
	}
	return k;
}
int l(char* x)
{
	int y = 0;
	while (*x++)
        {
		y++;
	}
	return y;
}
void comp(char* &x, int y)
{
	int n = var(x, y);
	n += n;
	int z = 0;
	char* arr = new char[n];
	int i = 0;
	while (i < y)
	{
		int l = 0;
		int j = i;
		while ((*(x + i)) == (*(x + j)))
		{
			l += 1;
			j += 1;
		};
		*(arr + z + 1) = *(x + i);
		*(arr + z) = l + '0';
		i = j;
		z += 2;
	}
	x = arr;
}
int main()
{
	int n;
	char* array = new char[1000];
	cin.getline(array, 1000);
	n = l(array);
	int p = var(array, n);
	p += p;
	comp(array, n);
	for (int i = 0; i < p; i++)
        {
		cout << *(array + i);
	    }
	return 0;
}
