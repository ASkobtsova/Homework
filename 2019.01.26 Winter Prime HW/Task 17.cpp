/*A sequence of positive integers is transmitted through the communication channel.
X1, X2, ... each number doesn't exceed 1000, the number is not known in advance.
Each number is passed as a separate text string containing
decimal notation of the number. The sign of the end of the transmitted sequence
is 0. Plot sequence element from XT to XT+N
is called lifting, if in this area next to each number more
previous. The lifting height is called the difference XT+N-XT. This program has to be
efficient and calculate the highest height among all
sequence lifts. If there are none in the sequence
rise, the program writes 0.*/

#include <iostream>
using namespace std;
int main() {
	int R, T = 1001, N = 0, L = 0, max = 0;
	do
        {
		cin >> R;
		if (R != 0)
        {
			N++;
		}
		if (R > T)
		{
			L = L + R - T;
		}
		else if (L > max)
            {
			max = L;
			L = 0;
            }
		T = R;
	}
	while (R != 0);
	cout << N << " numbers have been received" << endl;
	cout << "Highest lift height is " << max;
	return 0;
}
