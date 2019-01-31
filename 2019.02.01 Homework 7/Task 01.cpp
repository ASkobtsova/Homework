#include <iostream>
using namespace std;
class double_vector
{
	double* data;
	unsigned int size;
	unsigned int capacity;
public:
	double_vector()
	{
		size = capacity = 1;
		data = new double[1];
		*data = 0;
	}
	double_vector(unsigned int N)
	{
		size = capacity = N;
		data = new double[N];
		for (int i = 0; i < N; i++)
			data[i] = 0;
	}
	double_vector(double* A, unsigned int N)
	{
		size = capacity = N;
		for (int i = 0; i < N; i++)
			data[i] = A[i];
	}
	double_vector(const double_vector& A)
	{

		size = A.size;
		data = new double[size];
		for (int i = 0; i < size; i++)
			data[i] = A.data[i];
	}
	~double_vector()
	{
		delete[] data;
	}
	const double_vector& operator=(const double_vector& A)
	{
        size = A.size;
        capacity = A.capacity;
        data = A.data;
        return *this;
	}
	double &operator[] (int i)
	{
		return data[i];
	}
	void push_back(int x) {
		if (size >= capacity) {
			capacity *= 2;
			double* temp = new double[capacity];
			for (int i = 0; i < size; i++)
				temp[i] = data[i];
			delete[] data;
			data = temp;
		}
		data[size] = x;
		size++;
	}
	double pop_back() {
		double temp = data[size - 1];
		delete (data + size - 1);
		size--;
		return temp;
	}
	unsigned int Size()
	{
		return size;
	}
	unsigned int Capacity()
	{
		return capacity;
	}
	void resize(unsigned int N)
	{
		capacity += N;
		double* temp = new double[capacity];
		for (int i = 0; i < size; i++)
			temp[i] = data[i];
		delete[] data;
		data = temp;
	}
	void push_front(double x)
	{
		if (size >= capacity)
        {
			capacity *= 2;
			double* temp = new double[capacity];
			for (int i = 1; i < size + 1; i++)
				temp[i] = data[i];
			delete[] data;
			data = temp;
		}
		else
        {
			double* temp = new double[capacity];
			for (int i = 1; i < size + 1; i++)
				temp[i] = data[i];
			delete[] data;
			data = temp;
		}
		size++;
	}
	int pop_front()
	{
		double temp = data[0];
		delete (data + 0);
		size--;
		return temp;
	}
	void insert(double x, int k)
	{
		if (size >= capacity)
        {
			capacity *= 2;
			double* temp = new double[capacity];
			for (int i = 1; i < k; i++)
				temp[i] = data[i];
			for (int i = k + 1; i < size; i++)
				temp[i] = data[i - 1];
			delete[] data;
			data = temp;
		}
		data[k] = x;
	}
	void erase(int k)
	{
		delete (data + k);
		size--;
	}
	void erase(int a, int b)
	{
		if (a > b)
		{
			int T = b;
			b = a;
			a = T;
		};
		int length = b - a;
		for (int i = 1; i <= b; i++)
			delete (data + i);
		size -= length;
	}
};
double_vector &operator+ (double_vector& A, double_vector& B)
{
	unsigned int a = A.Size(), b = B.Size();
	double_vector temp(a + b);
	for (int i = 0; i < a; i++)
		temp[i] = A[i];
	for (int i = a; i < a + b; i++)
		temp[i] = B[i - a];
	return temp;
}
int main() {
	double_vector A(1);
	cout << A[0] << endl;
	int N, k, x, a, b;
	cin >> N;
	double_vector B(N);
	for (int i = 0; i < N; i++)
		cout << B[i] << ' ';
	cout << endl;
	cin >> N;
	double* T = new double(N);
	for (int i = 0; i < N; i++)
		cin >> T[i];
	double_vector C(T, N);
	cin >> x;
	C.push_front(x);
	cout << C.pop_front() << endl;
	cin >> x;
	C.push_back(x);
	cout << C.pop_back() << endl;
	cin >> k >> x;
	C.insert(x, k);
	cin >> a;
	C.erase(a);
	cin >> a >> b;
	C.erase(a, b);
	double_vector D = C + B;
	for (int i = 0; i < D.Size(); i++)
		cout << D[i] << ' ';
	return 0;
}
