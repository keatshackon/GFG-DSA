class Node{
	int data;
	Node left,right;
	Node(int x){
		data = x;
	}


	void Inorder(Node root){
		if(root == null){
			return;
		}
		Inorder(root.left);
		System.out.println(root.data);
		Inorder(root.right);
	}
}


class Inorder{
	public static void  main(String[] args) {
		Node root = new Node(10);
		root.left = new Node(5);
		root.right = new Node(3);
		root.left.left = new Node(6);
		root.left.right = new Node(10);
		root.right.right = new Node(15);
		root.right.left = new Node(12);

		root.Inorder(root);
	}
}