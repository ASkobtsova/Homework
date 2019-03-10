#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* next = NULL;
};
class int_list
{
	Node* head;
public:
	int_list()
	{
		this->head = NULL;
	}
	void push(int x)
	{
		Node* temp = new Node;
		temp->data = x;
		temp->next = head;
		head = temp;
	}
	void showhead()
	{
		cout << head->data;
	}
	void show_index(int k)
	{
		Node* temp = head;
		int i = 0;
		while (i != k)
        {
			temp = temp->next;
			i++;
		}
		cout << temp->data << " ";
	}
	void show()
	{
		Node* temp = head;
		while (temp != NULL)
        {
			cout << temp->data << " ";
			temp = temp->next;
		}
	}
	void push_index(int x, int k)
	{
		int i = 0;
		Node* temp = new Node;
		temp->data = x;
		Node* temp = head;
		while (i != k)
        {
			temp = temp->next;
			i++;
		}
		temp->next = temp->next;
		temp->next = temp;
	}
	void delete_el(int k)
	{
		int i = 0;
		Node* temp = head;
		while (i != k)
            {
			temp = temp->next;
			i++;
		}
		Node* temp = temp->next;
		temp->next = temp->next->next;
		delete temp;
	}
	int operator[](int k)
	{
		int i = 0;
		Node* temp = head;
		while (i != k)
            {
			temp = temp->next;
			i++;
		}
		return temp->data;
	}
	void operator=(int_list f)
	{
		Node* temp = f.head;

	}
	~int_list()
	{
		while (head != NULL)
		{
			Node* temp = head->next;
			delete head;
			head = temp;
		}
	}
};

int main()
{
	int_list L;
    L.push(145);
	L.show();
	L.showhead();
	cout << L[1];
	L.del(1);
	L.push_index(6, 89);
}
