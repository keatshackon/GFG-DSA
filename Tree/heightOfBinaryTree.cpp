#include<iostream
struct Node
{
	int data;
	Node *left,*right;
	Node(int x){
		data = x;
	}
};


void heightOfTree(Node *root){

	if(root->left == NULL && root->right == NULL)
	{	
		return 0;
	}

}

int main()
{
	Node *root = new Node(10);
	root->left = new Node(5);
	root->right = new Node(3);
	root->left->left = new Node(20);
	root->left->right = new Node(30);
	root->left->right->right = new Node(40);
	root->left->right->left = new Node(50);
	root->left->right->right->left = new Node(60);
	root->right->right = new Node(100);

	heightOfTree(root);

	return 0;
}