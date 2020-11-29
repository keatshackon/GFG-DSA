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
	while(head != NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
}

Node *insertNode(Node *head){
	int res = 0; 
	cout<<"Please Enter data to insert at Head = ";
	cin>>res;

	Node *temp = new Node(res);
	temp->next = head;
	return temp;

}

int main() {
	Node *h1 = NULL;

	int n;
	cout<<"How Many node You Want to Enter => ";
	cin>>n;
	while(n--){
		h1 = insertNode(h1);
	}

	cout<<"\n";

	cout<<"After Insert data ::> ";
	print(h1);


	return 0;

}
