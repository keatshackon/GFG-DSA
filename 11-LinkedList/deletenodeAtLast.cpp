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

void print(Node *head){
	if(head == NULL) return NULL;
	else if(head->next  == NULL){
		delete head;
		return NULL;
	}
	while(head -> next -> next != NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<head->data;
	delete head->next;
	head->next = NULL;
	
	
}

int main()
{
	Node *h1 = new Node(938);
	Node *h2 = new Node(48);
	Node *h3 = new Node(438);
	Node *h4 = new Node(657);

	h1->next = h2;
	h2->next = h3;
	h3->next = h4;
	h4->next = NULL;

	cout<<"Before Deleteion Of Last Node :: \n";
	Node *head = h1;
	while(head  != NULL){
		cout<<head->data<<" ";
		head = head->next;
	}

	cout<<"\n";

	cout<<"After Deleteion Of Last Node :: \n";
	print(h1);


	return 0;
}