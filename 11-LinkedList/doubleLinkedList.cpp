#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


struct Node
{
	int data;
	Node *prev,*next;
	Node(int x){
		data = x;
		prev = next = NULL;
	}	
};

int main()
{
	Node *h1 = new Node(10);
	Node *h2 = new Node(20);
	Node *h3 = new Node(30);

	h1->prev = NULL;
	h1->next = h2;
	h2->prev = h1;
	h2->next = h3;
	h3->prev = h2;
	h3->next = NULL;

	Node *temp = h1;

	cout<<"using Next pointer \n";
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}  
	cout<<"\nusing previous pointer \n";
	temp = h3;
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->prev;
	}
	return 0;
}