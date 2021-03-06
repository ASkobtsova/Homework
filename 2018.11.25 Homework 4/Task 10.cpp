/*This program has to contain the primorial function of the number given. The program should work in no more than O(n*log log n) steps.*/

#include <iostream>
using namespace std;

int main()
{
    int n, primorial = 1;
    cin >> n;
    bool *sieve = new bool[n + 1];
    sieve[0] = sieve[1] = 0;
    for (int i = 2; i <= n; i++)
{
    sieve[i] = 1;
      for (int i = 2; i <= n; i++)
    {
        if (sieve[i])
        {
            for (int j = i + i; j <= n; j+=i)
            {
                sieve[j] = 0;
            }
        }
   }
}
for (int i = 2; i <= n; i++)
    {
        if (sieve[i] == 1)
           {
            primorial *= i;
           }
    }
cout << primorial;
return 0;
}
