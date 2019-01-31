#include <iostream>
#include <utility>

using namespace std;

class Cyclic_Array
{
    public:
    pair <int, int>* data;
    int I = 0;
    int arraySize;
    Cyclic_Array (int N)
    {
        arraySize = N;
        data = new pair <int, int> [N];
    };
    Cyclic_Array (Cyclic_Array& A)
    {
        arraySize = A.arraySize;
        data = A.data;
    };
    ~Cyclic_Array ()
    {
        delete[] data;
    };
    pair <int, int> &operator[](int i)
    {
        while (i >= arraySize)
        {
            i -= arraySize;
        }
        return data[i];
    };
    void input ()
    {
        int j, a, b;
        for (int i = I; i < arraySize + I; i++)
        {
            j  = i;
            while (j >= arraySize)
                j -= arraySize;
            cin >> a >> b;
            data[j] = make_pair(a, b);
        }
    };
    void output()
    {
        int j;
        for (int i = I; i < arraySize + I; i++)
        {
            j = i;
            while (j >= arraySize)
                j -= arraySize;
            cout << data[j].first << " " << data[j].second << endl;
        }
    };
    moving (int k)
    {
        I += k;
    }
};

int main()
{
    int N, k;
    cin >> N;
    Cyclic_Array A (N);
    A.input();
    A.output();
    cin >> k;
    A.moving (k);
    A.output();
}
