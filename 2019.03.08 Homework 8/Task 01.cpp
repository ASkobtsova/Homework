/*This program has to contain the class double_stack - a stack of real numbers of variable size.
The class has to contain constructor, destructor, methods push, pop*/
#include <iostream>
using namespace std;

struct Node
{
	double data;
	Node* next = NULL;
	Node* prev = NULL;
};
class double_stack
{
	Node* head;
public:
	double_stack():head(NULL) {}
	void push(double x)
	{
		Node* temp = new Node;
		temp->data = x;
		temp->next = head;
		head = temp;
	}
	double pop()
	{
		if (head == NULL)
        {
			cout << "The stack is empty";
			return 0;
		}
		Node* temp = head;
		head = head->next;
		double x = temp->data;
		delete temp;
		return x;
	}
	~double_stack()
	{
		while (head != NULL)
        {
			Node* temp = head;
			head = head->next;
			delete temp;
		}
	}
};
int main()
{
	double_stack STACK;
	STACK.push(4.999);
	STACK.push(9.123);
	cout << STACK.pop() << endl;
	cout << STACK.pop() << endl;
	return 0;
}
