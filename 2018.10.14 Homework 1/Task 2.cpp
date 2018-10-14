/*This program has to find a "reverse modulus" number. This means that for numbers X and N you need to find Y:
(X*Y)%N=1.
The program guarantees that all of the numbers are natural*/

#include <iostream>
using namespace std;
int main() 
{
	unsigned int X, N, Y;
	cin >> X >> N;
	for (unsigned int i = 1; i < N; i++) 
	{
		if ((i * X) % N == 1) 
		{
			Y = i;
			cout << Y;
			return 0;
		}
	}
	cout << "None";
	return 0;
}