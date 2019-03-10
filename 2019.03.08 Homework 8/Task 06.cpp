#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool brackets(char opening, char closing)
{
	if (opening == '(' && closing == ')') return true;
	else if (opening == '[' && closing == ']') return true;
	else if (opening == '{' && closing == '}') return true;
	return false;
}

bool quest(string x)
{
	stack <char> C;
	for (int i = 0; i < x.length(); i++)
	{
		if (x[i] == '(' || x[i] == '[' || x[i] == '{')
			C.push(x[i]);
		else if (x[i] == ')' || x[i] == ']' || x[i] == '}' )
		{
         if (C.empty() || !brackets(C.top(), x[i]))
				return false;
			else
				C.pop();
		};
	};
	return C.empty();
}

int main()
{
	string leaf;
	cin >> leaf;
	if (quest(leaf))
	{
        cout << "Everything's okay" << endl;
    }
	else
    {
            cout << "Something's wrong" << endl;
    };
	return 0;
}
