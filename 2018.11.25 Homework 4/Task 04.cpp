/*This program has to find first n composite numbers.
It has to work in no more than O(n*log log n) steps.*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0, k = 5;
    cin >> n;
    bool *sieve = new bool[2 * n + 1];
    sieve[0] = sieve[1] = 0;
    for (int i = 2; i <= 2 * n; i++)
{
    sieve[i] = 1;
      for (int i = 2; i <= 2 * n; i++)
    {
        if (sieve[i])
        {
            for (int j = i + i; j <= 2 * n; j+=i)
            {
                sieve[j] = 0;
            }

        }

    }
}
if (n < 5)
{
int *comp = new int[5];
comp[1] = 4;
comp[2] = 6;
comp[3] = 8;
comp[4] = 9;

    for (int j = 1; j <= n; j++)
  {
    cout << comp[j] << " ";
  }
}

if (n >= 5)
{
for (int i = 2; i <= 2 * n; i++)
    {
        if (sieve[i] == 0)
            {
              sum++;
            }
        if ((sum <= n) && (sieve[i] == 0))
        {
            cout << i << " ";
        }
    }
}

return 0;
}
