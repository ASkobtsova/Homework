/*This program has to contain the structure "Array" to work with arrays in
the dynamic memory and contain a description of the structure
and the program showing its working ability. The structure must be able to work with arrays
of unknown size. User has to be able to make any function using this structure.*/

#include <iostream>
using namespace std;

struct array
{
    int N; //N is array's size
    int* p;
    array(int a)
    {
        N = a;
        p = new int[a];
    };
    array(const array& A)
    {
        N = A.N;
        p = A.p;
    };

    int &operator[](int i)
    {
        return p[i];
    };

    ~array()
    {
        delete[] p;
    };

    void in()
    {
        for (int i = 0; i < N; i++)
            cin >> *(p + i);
    };

    void out()
    {
        for (int i = 0; i < N; i++)
            cout << *(p + i) << " " << endl;
    };

    int max()
    {
        int t = *p;
        for (int i = 0; i < N; i++)
        {
            if (*(p + i) > t)
            {
                t = *(p + i);
            }
        }
        return t;
    };
    int min()
    {
        int t = *p;
        for (int i = 0; i < N; i++)
        {
            if (*(p + i) < t)
            {
             t = *(p + i);
            }
            }
        return t;

    };

};

void swap(int *p[])
{   int i, k;
    int temp = *p[i];
	*p[i] = *p[k];
	*p[k] = temp;
}

int main()
{
    int N;
    cin >> N;
    array X(N);
    cout << "The elements are:" << endl;
    X.in();
    X.out();
    cout << "The greatest element is " << X.max() << endl;
    cout << "The lowest element is " << X.min() << endl;
    swap(X[0], X[1]);
    cout << "Elements X[0] and X[1] were swapped" << endl;
    cout << "X[0] = " << X[0] << ", " << "X[1] = "<< X[1];
    return 0;
}
