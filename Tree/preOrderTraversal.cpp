#include<iostream>
struct Node
{
	int data;
	Node *left,*right;
	Node(int x){
		data=x;
		left = right = NULL;
	}
};

void inorder(Node *root){
	if(root == NULL){
		return;
	}
	//Order To Traverse The Tree In Preorder Traversal!
	printf("%d ",root->data);
	inorder(root->left);
	inorder(root->right);
	
	
}

int  main(){
	Node *root = new Node(10);
	root->left = new Node(5);
	root->right = new Node(3);
	root->left->left = new Node(6);
	root->left->right = new Node(10);
	root->right->right = new Node(15);
	root->right->left = new Node(12);

	inorder(root);

	return 0;
}
