/*This program has to count the Euler function of the number.
Effectiveness: gcd is O(log n)
We repeat gcd procedure n-2 times (we start with 2 and end with n-1), so the total is O((n-2) * log n)*/

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

int main()
{
    int n;
    cin >> n;
    int f = 1;
    for (int i = 2; i < n; i++)
    {
        if (gcd(n, i) == 1)
        {
            f++;
        }
    }
    cout << f;
}
