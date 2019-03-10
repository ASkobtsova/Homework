/*This program has to contain the class char_deque - dec characters of variable size.
The class has to contain constructor, destructor, methods push_front, push_back, pop_front, pop_back*/

#include <iostream>
#include <string>
using namespace std;

struct Node
{
	char data;
	Node* next = NULL;
	Node* prev = NULL;
};
class char_deque
{
	Node* head;
	Node* tail;
public:
	char_deque(): head(NULL){}
	void push_front(char x)
	{
		if (head == NULL)
        {
			head = new Node;
			tail = head;
			head->data = x;
		}
		head->prev = new Node;
		head->prev->next = head;
		head = head->prev;
		head->data = x;
	}
	void push_back(char x)
	{
		if (head == NULL)
        {
			head = new Node;
			tail = head;
			head->data = x;
		}
		tail->next = new Node;
		tail->next->prev = tail;
		tail = tail->next;
		tail->data = x;
	}
	char pop_front()
	{
		if (head == NULL)
        {
			cout << "The deque is empty";
			return 0;
		}
		Node* temp = head;
		head = head->next;
		char x = temp->data;
		delete temp;
		return x;
	}
	char pop_back()
	{
		if (head == NULL)
		{
			cout << "The deque is empty";
			return 0;
		}
		Node* temp = tail;
		tail = tail->prev;
		char x = temp->data;
		delete temp;
		return x;
	}
	~char_deque()
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
	char_deque D;
	D.push_front('X');
	cout << D.pop_front() << endl;
	D.push_back('Y');
	cout << D.pop_back() << endl;
	D.push_back('Z');
	D.push_back('Q');
    cout << D.pop_back() << endl;
    cout << D.pop_back() << endl;
	return 0;
}
