/*Grandpa Frost and Snow Maiden always come to children's matinees with a bag of candies.
Grandpa divides the candies equally among all those presents (the number of children
is never more than 100), and gives the remaining candies to the
Snow Maiden. The Snow Maiden writes down in a notebook the number of received
candies. If the candies were divided between all the children without a trace, Snow Maiden
receives nothing and writes nothing. When all the parties finally finished, Grandpa Frost
was wondering what number most often recorded snow maiden. Grandfather
Frost and Snow Maiden are magical, so the number of matinees (N) can be very large. Write a program that will
solve this problem.
Description of input data
The first line contains one positive integer which is N, each of the following N lines contains two integers:
D-the number of children who came to the matinee, and then K-the number of
candies in Grandpa's sack at this party.
1 ≤ N ≤ 10000
1 ≤ D ≤ 100 (for each D)
D ≤ K ≤ 1000 (for each pair D, K)
The description of the output
The program should print the number that the Snow Maiden has written the
most often. If several numbers were written equally often, it is necessary to print the largest
of them. If the Snow Maiden has never written anything, it is necessary to print
zero.*/

#include <iostream>
using namespace std;
int main()
{
	int max = 100, N, D, K, imax;
	int r;
	int *a = new int[max - 1];
	for (int i = 0; i < max - 1; i++)
        {
		a[i] = 0;
	    }
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> D >> K;
		r = K % D;
		if (r > 0) {
			a[r] = a[r] + 1;
		}
	}
	imax = 1;
	for (int i = 1; i < max - 1; i++)
	{
		if (a[i] >= a[imax])
		{
			imax = i;
		}
	}
	if (a[imax] == 0)
	{
		imax = 0;
	}
	cout << imax;
	return 0;
}
