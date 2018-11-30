/*This program has to find all Chen Prime numbers not exceeding n.
The program should work in no more than O(n*log log n) steps. */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool *sieve = new bool[n + 3];
    sieve[0] = sieve[1] = 0;
    int *ver = new int[n + 3];
    for (int i = 2; i <= n + 2; i++)
{

    sieve[i] = 1;
    ver[i] = 0;
      for (int i = 2; i <= n + 2; i++)
    {
        if (sieve[i])
        {
            for (int j = i + i; j <= n + 2; j+=i)
            {
                sieve[j] = 0;
                while ((j % i) == 0)
                {
                    int m = j;
                    ver[j]++;
                    m /= i;
                    if (ver[j] > 2)
                    {
                        break;
                    }
                }
            }
         }

    }

}
for (int i = 2; i <= n; i++)
    {
		if ((sieve[i]) && (sieve[i + 2]) || (ver[i + 2] == 2))
            {
			cout << i << " ";
		    }
	    }


return 0;
}

