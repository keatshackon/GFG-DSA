class Node:
	def __init__(self,x:int):
		self.data = x
		self.left = 0
		self.right = 0

def Inorder(root):
		if(root == 0):
			return
		Inorder(root.left)
		print(root.data)
		Inorder(root.right)

if __name__ == "__main__":
	root = Node(10)
	root.left = Node(5)
	root.right = Node(3)
	root.right.right = Node(15)
	root.right.left = Node(12)
	root.left.left = Node(6)
	root.left.right = Node(10)

	Inorder(root)