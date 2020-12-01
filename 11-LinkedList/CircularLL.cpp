#include<bits/stdc++.h>
using namespace std;
typedef long long ll;;



	/*
	   head                                    tail
	--------    ------   ------   -------   --------
|->	|  1   | -> | 2  | ->| 3  | ->|  4  |->  |  5  | -----
|	--------    ------   ------   -------   --------     |
|														 |	
| --------------------------------------------------------

	

	*/

struct Node
{
	int data;
	Node *next,*prev;
	Node(int x){
		data = x;
		next = NULL;
	}
};

Node *createDLL(){
	Node *temp,*q,*r = NULL;
	int res = 0,n;
	cin>>n;
	while(n--){
		if( r == NULL){
			cin>>res;
			r = new Node(res);
			temp = r;
		}else{
			cin>>res;
			q = new Node(res);
			r->next = q;
			r = q;
		}
	}
	r->next = temp;
	return temp;

}

void print(Node *head){
	Node *cur = head;
	cout<<cur->data<<" ";
	cur = head->next;
	while(cur != head){
		cout<<cur->data<<" ";
		cur= cur->next;
	}
}

int main()
{
	Node *head = createDLL();
	print(head);
	return 0;

}




