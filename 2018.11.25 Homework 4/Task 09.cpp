/*This program had to find all primes of Sophie Germain not exceeding n and to work in no more than O(n*log log n) steps.*/

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    bool *sieve = new bool[n + 1];
    sieve[0] = sieve[1] = 0;
    for (int i = 2; i <= 2 * n + 1; i++)
{
    sieve[i] = 1;
      for (int i = 2; i <= 2 * n + 1; i++)
    {
        if (sieve[i])
        {
            for (int j = i + i; j <= 2 * n + 1; j+=i)
            {
                sieve[j] = 0;
            }
        }
    }
}
    for (int i = 2; i <= n; i++)
    {
            if ((sieve[i]) && (sieve[2 * i + 1]))
        {
            cout << i << " ";
        }
    }

return 0;
}
