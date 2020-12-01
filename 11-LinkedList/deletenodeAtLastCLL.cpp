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
	Node *cur = head;
	cout<<cur->data<<" ";
	cur = cur->next;
	while(cur != head){
		cout<<cur->data<<" ";
		cur = cur->next;
	}
}

Node *createCLL(){
	Node *temp = NULL,*r = NULL,*q = NULL;
	int res = 0,n = 0,f = 1;
	cin>>n;
	while(n--){
		if(r == NULL){
			cin>>res;
			r = new Node(res);
			temp = r; 	
			f = 0;
		}else{
			cin>>res;
			q = new Node(res);
			r -> next = q;
			r = q;
			f = 0;
		}

	} 
	if(f == 0){
		r->next = temp;
	}
	return temp;

}

int main()
{
	Node *head = createCLL();
	if(head == NULL){
		return 0;
	}else if(head == head->next){
		delete head;
		cout<<"Last Node deleted";
	}else{
		Node *cur = head;
		while(cur->next->next != head){
			cur = cur -> next;
		}
		delete cur->next;
		cur->next = NULL;
		cur -> next = head;
		print(head);
	}
}