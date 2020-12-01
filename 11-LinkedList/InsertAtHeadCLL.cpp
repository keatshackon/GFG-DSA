#include<bits/stdc++.h>
using namespace std;
typedef long long l;

struct Node
{
	int data;
	Node *next;
	Node(int x){
		data = x;
		next = NULL;
	}

};

void print(Node *head ){
	Node *cur =  head;
	cout<<cur->data<<" ";
	cur =head->next;

	while(cur != head){
		cout<<cur->data<<" ";
		cur = cur->next;
	}
}
Node *createCLL(){
	Node *temp,*q,*r = NULL;
	int res = 0,n;
	cin>>n;
	while(n--){
		if(r == NULL){
			cin>>res;
			r = new Node(res);
			r -> next = NULL;
			temp = r; 
		}else{
			cin>>res;
			q = new Node(res);
			r -> next = q;
			r = q;

		}
	}
	r ->next = temp;
	return temp;
} 

int main(){

	Node *head = createCLL();
	int x;
	cout<<"Enter data to be insertes at begining :: ";
	cin>>x;


	/*
	   head                                    tail
	--------    ------   ------   -------   --------
|->	|  1   | -> | 2  | ->| 3  | ->|  4  |->  |  5  | -----
|	--------    ------   ------   -------   --------     |
|														 |	
| --------------------------------------------------------

	

	*/

	// 
	Node *res = new Node(x);
	//Insert Node At second position!
	res->next = head->next;
	head->next = res;

	//swap data from Node 2 two to Node one!
	int temp = head->data;
	head->data = res->data;
	res->data = temp;
	print(head);
}