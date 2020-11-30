#include<bits/stdc++.h>
using namespace std;
typedef long long ll;;


struct Node
{
	int data;
	Node *next;
	Node(int x){
		data = x;
		next = NULL;
	}
};

Node *createLinkedList(){
	int res = 0;
	Node *r = NULL,*q,*temp=NULL;
	int n;
	cout<<"how many Node Do you want :: \n";
	cin>>n;
	while(n-- && n>=0){
		cout<<"keats";
		if(r == NULL){
			cout<<"Enter Data into Node :: ";
			cin>>res;
			r = new Node(res);
			temp = r;
			r->next = NULL;
		}else{
			cout<<"Enter Data into Node :: ";
			cin>>res;
			q = new Node(res);
			r -> next  = q;
			r = q;
			q->next = NULL;  

		}
		
	}

	return temp;
	
}

int recursive(Node *head,int x,int cnt){
	if(head == NULL ) return -1;
	else if(head->data == x) return cnt;

	return recursive(head->next,x,++cnt);
}


int main()
{
	int f = 1, x = 0,cnt = 1;
	Node *head = createLinkedList();
	if(head == NULL){
		return 0;
	}
	cout<<"Enter data to be searched :: ";
	cin>>x;
	

	cout<<recursive(head,x,cnt);

	// while(head != NULL){
	// 	if(head->data == x){
	// 		cout<<cnt;
	// 		f=0;
	// 		break;
	// 	}else{
	// 		cnt++;
	// 		head = head->next;
	// 	}
	// }
	// if(f == 1){
	// 	cout<<-1;
	// }

	return 0;


}