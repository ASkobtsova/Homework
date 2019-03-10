#include <iostream>
#include<stack>

using namespace std;
class int_stack_with_max
{
	stack <int> S;
	int n;
public:
	void max()
	{
		if (S.empty())
            cout << "It's impossible to find the maximum";
		else
			cout<< n << endl;
	}
	void pop()
	{
		if (S.empty())
        {
			cout << "It's impossible to pop";
			return;
		}
		int m = S.top();
		S.pop();
		if (m > n)
		{
			cout << n << endl;
			m = 2 * n - m;
		}

		else
			cout << m << endl;
	}
	void push(int A)
	{
		if (S.empty())
        {
			n = A;
			S.push(A);
			return;
		}
		if (A > n)
		{
			S.push(2 * A - n);
			n = A;
		}
		else
            S.push(A);
	}
};
int main() {
	int_stack_with_max SWM;
	int t;
	cin >> t;
	SWM.push(t);
	cin >> t;
	SWM.push(t);
	SWM.max();
	return 0;
}
