/*This program has to contain the class string_queue - a string queue.
The class has to contain a constructor, destructor, methods push, pop.*/
#include <iostream>
#include <string>

using namespace std;
struct Node
{
	string data;
	Node* next = NULL;
};
class string_queue
{
	Node* head;

public:
	string_queue():head(NULL) {}
	void push(string x)
	{
		if (head == NULL)
		{
			head = new Node;
			head->data = x;
		}
		Node* temp = head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new Node;
		temp->next->data = x;
	}
	string pop()
	{
		if (head == NULL)
        {
			cout << "The queue is empty";
			return 0;
		}
		Node* temp = head;
		head = head->next;
		string x = head->data;
		delete temp;
		return x;
	}
	~string_queue()
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
	string_queue Q;
	Q.push("So you're tired but you're alive,");
	Q.push("So open up your eyes,");
	Q.push("And you can get your sleep when you are dead");
	Q.push("Kill the clock inside your head,");
	Q.push("Bring your normalcy to the edge and watch it");
	Q.push("Drown in new horizons,");
	Q.push("New horizons");
	cout << Q.pop() << endl;
	cout << Q.pop() << endl;
	cout << Q.pop() << endl;
	cout << Q.pop() << endl;
	cout << Q.pop() << endl;
	cout << Q.pop() << endl;
	cout << Q.pop() << endl;
	return 0;
}
