/*In the physical laboratory, a long-term experiment of studying
the gravitational field of the Earth is held. A positive integer is transmitted to the lab every minute.
The number of transmitted numbers in the series is known and equal to all
the numbers not exceeding 1000. The time of transferring can be ignored.
It is necessary to calculate the "beta value" of the series of readings,
which is the maximum product of the two readings, between the times of transmission
which took at least 6 minutes. If you cannot obtain such a work,
the answer is -1. The program should be effective in time and
memories.

To get a time-efficient solution you need to remember as you enter data
absolute minimum and minimum even reading at each time.
Since each current minimum reading is used after entering 6 more elements
and after that, it becomes unnecessary, it is sufficient to store only the last 6
minimums.
You can use an array for this, the size of this array
does not depend on the total number of entered readings, so it will be effective*/

#include <iostream>
using namespace std;
int main() {
	int max = 1001;
	int S = 6;
	int ind, MinE, MinA, MinM, mult;
	int N;
	cin >> N;
	int *arr = new int[S];
	for (int i = 0; i < S; i++)
	{
		cin >> arr[i];
	}
	MinA = max;
	MinE = max;
	MinM = max * max;
	for (int i = S; i < N; i++)
	{
		cin >> ind;
		if (arr[0] < MinA)
		{
			MinA = arr[1];
		}
		if ((arr[0] % 2 == 0) && (arr[0] < MinE))
		{
			MinE = arr[0];
		}
		if (ind % 2 == 0)
		{
			mult = ind * MinA;
		}
		else if (MinE < max)
		{
			mult = ind * MinE;
		}
		else
		{
			mult = max * max;
		}
		if (mult < MinM)
		{
			MinM = mult;
			for (int j = 0; j < S - 1; j++)
			{
				arr[j] = arr[j + 1];
				arr[S] = ind;
			}
		}
	}
	if (MinM == max * max)
	{
		MinM = -1;
	}
	cout << MinM;
	return 0;
}
