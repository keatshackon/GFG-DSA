#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;


struct Node
{
	int data;
	Node *next;
	Node(int x){
		data = x;
		next = NULL;
	}
};

void print(Node *head){
	while(head != NULL){
		cout<<head->data<<"\n";
		head = head->next;
	}
}

void deleteNode(Node *h1){
	print(h1->next);
}


int main()
{
	Node *h1 = new Node(1090);
	Node *h2 = new Node(10);
	Node *h3 = new Node(1120);
	Node *h4 = new Node(11222);
	Node *h5 = new Node(19876);

	h1->next = h2;
	h2->next = h3;
	h3->next = h4;
	h4->next = h5;
	h5->next = NULL;

	cout<<"Before deletion of First node ::\n";
	print(h1);

	cout<<"After Deletion of First node  ::\n";
	deleteNode(h1);


}