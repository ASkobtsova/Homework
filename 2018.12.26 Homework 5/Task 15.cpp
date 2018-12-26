/*This program has to find the pair of such dots that the distance between them on the plain dimension is the smallest.*/

#include <iostream>
#include <cmath>
using namespace std;

double ar(double x1, double y1, double x2, double y2)
{
	double doubx = x1 - x2;
	double douby = y1 - y2;
	double m = sqrt(doubx * doubx + douby * douby);
	return m;
}
int main()
{
int N;
cin >> N;
double dotsX[N];
double dotsY[N];
for (int j = 0; j < N; j++)
cin >> dotsX[j] >> dotsY[j];
double p = 0;
double leng = ar(dotsX[1], dotsY[1], dotsX[2], dotsY[2]);
for (int j = 0; j < N; j++)
{
for (int i = j + 1; i < N; i++)
{
	p = ar(dotsX[j], dotsY[j], dotsX[i], dotsY[i]);
	if (leng > p)
        {
           leng = p;
        }
};
};
cout << leng;
return 0;
}
