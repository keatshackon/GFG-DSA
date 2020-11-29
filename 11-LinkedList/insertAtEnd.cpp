#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Node
{
	int data;
	Node *next;
	Node(int x){
		data = x;
		next = NULL;
	}	
};

void print(Node *head) {
	while(head !=NULL) {
		cout<<head->data<<" ";
		head = head->next;
	}
}

void insertAtEnd(Node *head){
	Node *temp = head;
	while(head->next != NULL){
		head = head->next;
	}
	int res;
	cout<<"Enter data to be insert into linked list :: ";
	cin>>res;
	Node *q = new Node(res);
	head->next = q;

	print(temp);
}

int main()
{
	Node *h1 = new Node(10);
	Node *h2 = new Node(304);
	Node *h3 = new Node(20);
	Node *h4 = new Node(54);
	Node *h5 = new Node(99);

	h1->next = h2;
	h2->next = h3;
	h3->next = h4;
	h4->next = h5;
	h5->next = NULL;

	int res = 0;
	cout<<"Before Insertion ::> ";
	print(h1);

	cout<<"\n";

	cout<<"After Insertion ::> ";
	insertAtEnd(h1);


	return 0;

}