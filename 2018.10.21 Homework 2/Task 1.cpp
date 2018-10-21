#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	if (b == 0)
        {
		return a;
	    }
	return gcd(b, a % b);
}
struct rational
{
	int m;
	int n;

	rational(int a, int b)
	{
		m = a / gcd(a, b);
		n = b / gcd(a, b);
	}

	rational(int a = 0)
	{
		m = a;
		n = 1;
	}

	rational(const rational &A)
	{
		m = A.m;
		n = A.n;
	}

	rational &operator=(const rational &A)
	{
		m = A.m;
		n = A.n;
		return *this;
	}

	rational &operator*=(const rational &A)
	{
		m *= A.m;
		n *= A.n;
		int d = gcd(m, n);
			m /= d;
			n /= d;
		return *this;
	}

	rational &operator/=(const rational &A)
	{
		m *= A.n;
		n *= A.m;
		int d = gcd(m, n);
		m /= d;
		n /= d;
		return *this;
	}
	rational &operator+=(const rational &A)
	{
		m = ((m * A.n) + (n * A.m));
		n *= A.n;
		int d = gcd(m, n);
		m /= d;
		n /= d;
		return *this;
	}
	rational &operator-=(const rational &A)
	{
		m = ((m * A.n) - (n * A.m));
		n *= A.n;
		int d = gcd(m, n);
		m /= d;
		n /= d;
		return *this;
	}
};


	rational &operator+(rational A, const rational &B)
	{
		return A += B;
	}

	rational &operator-(rational A, const rational &B)
	{
		return A -= B;
	}

    rational &operator*(rational A, const rational &B)
	{
		return A *= B;
	}

	rational &operator/(rational A, const rational &B)
	{
		return A /= B;
	}

	bool operator==(const rational &A, const rational &B)
	{
		return ((A.m == B.m) && (A.n == B.n));
        }

	bool operator!=(const rational &A, const rational &B)
	{
		return !(A == B);
        } 

	bool operator>(const rational &A, const rational &B)
	{
    return (((A.m * B.n) - (B.m * A.n) > 0) && (A.n * B.n > 0)) || (((A.m * B.n) - (B.m * A.n) < 0) && (A.n * B.n < 0));
        }

	bool operator<(const rational &A, const rational &B)
	{
     return !(A > B) && !(A == B);
        }

	bool operator>=(const rational &A, const rational &B)
	{
		return ((A > B) || (A == B));
	}

	bool operator<=(const rational &A, const rational &B)
	{
		return ((A < B) || (A == B));
	}

	istream& operator>>(istream &ins, rational &A)
	{
		ins >> A.m >> A.n;
		int d = gcd(A.m, A.n);
		A.m /= d;
		A.n /= d;
		return ins;
	}

	ostream& operator<<(ostream &outs, const rational &A)
	{
		outs << A.m << "/" << A.n;
		return outs;
	}

	int main()
	{   rational X(3,5), Y(-7,9);
		cout << "X = " << X << " Y = " << Y << endl;
		cout << "X + Y = " << X + Y << endl;
		cout << "X - Y = " << X - Y << endl;
		cout << "X * Y = " << X * Y << endl;
		cout << "X / Y = " << X / Y << endl;
		rational Q = X;
		rational(A) = Q *= Y;
		cout << "X *= Y = " << A << endl;
		rational W = X;
		rational(B) = W /= Y;
		cout << "X /= Y = " << B << endl;
		rational E = X;
		rational(C) = E += Y;
		cout << "X += Y = " << C << endl;
		rational R = X;
		rational(D) = R -= Y;
		cout << "X -= Y = " << D << endl;
		if (X == Y)
        {
            cout << X << " = " << Y << endl;
        }
		if (X != Y)
        {
            cout << X << " != " << Y << endl;
        }
		if (X > Y)
        {
            cout << X << " > " << Y << endl;
        }
        if (X >= Y)
        {
            cout << X << " >= " << Y << endl;
        }
        if (X < Y)
        {
                cout << X << " < " << Y << endl;
        }
        if (X <= Y)
        {
            cout << X << " <= " << Y << endl;
        }

        rational Z;
        cout << "Enter the numerator and denominator of the fraction" << endl;
        cin >> Z;
        cout << Z;

		return 0;
	}
