#include <iostream>
#include <stdio.h>
#include <vector>
#include <functional>
#include <queue>
using namespace std;
int main()
{
	int Time, N, x;
	priority_queue<long long, vector<long long>, greater<long long>> ticketWindows;
	scanf("%d %d", &N, &x);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &Time);
		if (ticketWindows.size() != x) ticketWindows.push(Time);
		else {
			long long temp = ticketWindows.top(); ticketWindows.pop();
			ticketWindows.push(temp + Time);
		}
	}
	while (ticketWindows.size() > 1) ticketWindows.pop();
	printf("%lld\n", ticketWindows.top());
	return 0;
}
