/*A set of N positive integers is given. All possible pairs are formed from
these numbers (two elements that are at different places in the set are considered a pair, the order of
the numbers in the pair is not taken into account), the sum of the elements is calculated in each pair.
It is necessary to determine the number of pairs for which the resulting amount is divided by 9.
Write a time-efficient and memory-efficient program to solve this problem.*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N, s, x = 0;
    cin >> N;
    int *d = new int[N];
    for (int i = 0; i < 7; i++)
    {
        d[i] = 0;
    };
    for (int i = 0; i < N; i++)
    {
        cin >> x;
        if (x % 7 == 0)
        {
          d[0]++;
        }
        if (x % 7 == 1)
            {
            d[1]++;
            }
        if (x % 7 == 2)
            {
            d[2]++;
            }
        if (x % 7 == 3)
        {
           d[3]++;
        }
        if (x % 7 == 4)
            {
            d[4]++;
            }
        if (x % 7 == 5)
        {
            d[5]++;
        }
        if (x % 7 == 6)
        {
            d[6]++;
        }
    };
    s = d[0] * (d[0] - 1) + d[1] * d[6] + d[2] * d[5] + d[3] * d[4];
    cout << s;
    return 0;
}
