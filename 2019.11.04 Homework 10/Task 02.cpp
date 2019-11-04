/*This program has to find de Bruijn sequence for an alphabet with k not bigger than 6, l not bigger than 6.*/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

unordered_set <string> seen;
vector <int> edges;

void dfs(string x, int &k, string & A)
{
	for (int i = 0; i < k; ++i)
        {
		string y = x + A[i];
		if (seen.find(y) == seen.end())
		{
			seen.insert(y);
			dfs(y.substr(1), k, A);
			edges.push_back(i);
		}
	    }
}

string deBruijnSequence(int n, int k, string A)
{
	seen.clear();
	edges.clear();
	string t = string(n - 1, A[0]);
	dfs(t, k, A);
	string z;
	int l = pow(k, n);
	for (int i = 0; i < l; ++i)
		z += A[edges[i]];
	z += t;
	return z;
}

int main()
{
	int n, k;
	cout << "Enter n and k (both are not bigger than 6)" << endl;
	cin >> n;
	cin >> k;
	string A = "abcdef";
	cout << deBruijnSequence(n, k, A);
	return 0;
}
