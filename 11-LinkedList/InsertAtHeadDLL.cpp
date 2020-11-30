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

Node *createDLL(){
	int n;
	cout<<"Enter Number Of Node :: ";
	cin>>n;
	int res = 0;
	Node *r,*q,*temp = NULL;
	while(n-- && n>=0){
		if(r == NULL){
			cin>>res;
			r = new Node(res);
			r->next = NULL;
			r->prev = NULL;
			temp = r;
		}else{
			cin>>res;
			q = new Node(res);
			r->next = q;
			q->prev = r;
			r = q;
			q->next =NULL;
		}
	}
	return temp;
}


void print(Node *temp){
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp =temp->next;
	}
}
int main()
{
	int x;
	Node  *head = createDLL();
	cout<<"Enter data to be inserted at begining :: ";
	cin>>x;
	if(head == NULL){
		head = new Node(x);
		print(head);
	}else {
		Node *temp = new Node(x);
		head->prev = temp;
		temp->next = head;
		temp->prev =NULL;
		print(temp);
	}
	return 0;
}