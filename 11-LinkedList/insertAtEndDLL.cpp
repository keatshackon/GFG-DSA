#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

struct Node
{
	int data;
	Node *prev,*next;
	Node(int x){
		data = x;
		prev = next = NULL;
	}
};

Node *createDLL(){
	Node *temp,*r = NULL,*q;
	int n;
	int res = 0;
	cout<<"Enter the Number of Node :: ";
	cin>>n;
	while(n-- && n>=0){
		if(r == NULL){
			cin>>res;
			r = new Node(res);
			r->next = NULL;
			r->prev =NULL;
			temp = r;
		}else{
			cin>>res;
			q = new Node(res);
			r->next = q;
			q->prev = r;
			r = q;
			q->next = NULL;
		}
	} 

	return temp;
}

void print(Node *head){
	while(head != NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
}
int main()
{
	Node *head = createDLL();

	int x;
	cout<<"Enter the data into linked list :: ";
	cin>>x;

	
	if(head == NULL){
		head = new Node(x);
		print(head);
	}else{
		Node *temp = head;
		while(temp -> next != NULL){
			temp = temp->next;
		}
		Node *t =  new Node(x);
		t->prev = temp;
		t->next = NULL;
		temp->next = t;
		print(head);
	}
}