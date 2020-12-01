#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Node
{
	int data;
	Node *next;
	Node(int x)
	{
		data = x;
		next = NULL;
	}

};

void print(Node *head){
	
	Node *cur = head;
	cout<<cur->data<<" ";
	cur = cur->next;
	while(cur != head){
		cout<<cur->data<<" ";
		cur = cur-> next;
	}

}

Node *createCLL(){
	Node *temp = NULL, *q, *r = NULL;
	int res =0 ,n = 0;
	cin>>n;
	int f = 1;
	while(n--){
		if(r == NULL){
			cin>>res;
			r = new Node(res);
			temp = r ;
		}else{
			cin>>res;
			q = new Node(res);
			r -> next = q;
			r = q;
			f = 0;

		}
	}
	if(f == 0)
		r -> next = temp;

	return temp;
}

int main()
{
	Node *head = createCLL();
	if(head == NULL){
		int x;
		cin>>x;
		Node *res = new Node(x);
		res->next = res;
		print(res);
	}else{
		int x;
		cin>>x;
		Node *res = new Node(x);
		res->next = head->next;
		head->next = res; 
		int temp = head->data;
		head->data = res->data;
		res->data = temp; 
		print(head->next);
	}

}