/*This program has to find the sum of the array elements that can be divided by 27 or 72 (but not both).*/ 

#include <iostream> 
#include <cstdlib> 
using namespace std; 

int main() 
{ 
unsigned int N; 
int sum = 0; 
cin >> N; 
int *p = new int[N]; 
for (unsigned int i = 0; i < N; i++) 
{ 
cin >> p[i]; 
int x = (abs(p[i]) % 27), y = (abs(p[i]) % 72); 
if ((x == 0) && (y != 0)) 
   { 
     sum += p[i]; 
   } 
else if ((x != 0) && (y == 0)) 
  { 
    sum += p[i]; 
  }   
} 
cout << sum; 
delete[] p; 
return 0; 
}
