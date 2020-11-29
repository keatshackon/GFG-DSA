#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Node{
	int data;
	Node *next;
	Node(int x){
		data = x;
		next = NULL;
	}
};

void print(Node *head){
	while(head != NULL){
		if(head->next !=NULL){
			cout<<head->data<<"->";
			head = head->next;
		}else{
			cout<<head->data;
			head = head->next;
		}
		
	}
}

int main()
{
	//Creating Nodes!
	Node *head = new Node(20);
	Node *h2 = new Node(30);
	Node *h3 = new Node(50);
	Node *h4 = new Node(60);
	Node *h5 = new Node(70);

	// Linking here!
	head->next = h2;
	h2->next = h3;
	h3->next = h4;
	h4->next = NULL;

	print(head);
	return 0;
}