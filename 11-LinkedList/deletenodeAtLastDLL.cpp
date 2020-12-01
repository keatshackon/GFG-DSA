#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Node
{
	int data;
	Node *next,*prev;
	Node(int x){
		data = x;
		prev = next = NULL;
	}	
};

void print(Node *head ){
	while(head != NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
}

Node  *createDLL(){
	Node *temp,*q,*r = NULL;
	int res = 0;
	int n;
	cin>>n;
	while(n--){
		if(r == NULL ){
			cin>>res;
			r = new Node(res);
			r->next = NULL;
			r->prev = NULL;
			temp = r;
		}
		else{
			cin>>res;
			q = new Node(res);
			q->next =NULL;
			q->prev = r;
			r->next = q;
			r = q;
		}
	}
	return temp;
}

int main()
{
	Node *head = createDLL();
	if(head == NULL){
		print(head);
	}else{
		Node *cur = head;
		while(cur->next->next != NULL){
			cur = cur->next;
		}
		// delete cur->next;
		cur->next = NULL;

		print(head);
	}
}