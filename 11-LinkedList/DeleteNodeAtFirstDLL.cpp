#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


struct Node
{
	int data;
	Node *next,*prev;
	Node(int x){
		data = x;
		next = prev = NULL;
	}

};

Node *createDLL(){
	Node *temp,*q,*r = NULL;
	int n,res = 0;
	cin>>n;
	while(n--){
		
		if( r == NULL){
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
			q->next = NULL;
			r = q;

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

void deleteNode(Node *head){
	if(head == NULL){
		print(head);
	}else{
		Node *temp = head->next;
		delete head;
		temp->prev =  NULL;
		
		print(temp);
	}
}

int main()
{	
	Node *head = createDLL();
	deleteNode(head);
	return 0;


}