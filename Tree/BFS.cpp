#include<stdio.h>
#include<iostream>
#include<queue>
using namespace std;
struct Node
{
	int data;
	Node *left,*right;
	Node(int x){
		data = x;
		left = right = NULL;
	}
};
typedef struct Node Node; 

void bfs(Node *root){

	std::vector<Node> q;
	q.push_back(root);
	while(q.empty() == false)
	{
		Node *d = q[0];
		printf("%d\n",d->data);
		if(d->left != NULL){
			q.push_back(d->left);

		}
		if(d->right != NULL){
			q.push_back(d->right);	
		}
		q.erase(0);
	}
}

int main()
{

	Node *root = new Node(10);
	root->left = new Node(5);
	root->right = new Node(20);
	root->left->left = new Node(3);
	root->left->right = new Node(10);
	root->right->right = new Node(6);
	root->right->left = new Node(15);

	bfs(root);

	return 0;
}
