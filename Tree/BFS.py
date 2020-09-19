class Node():
	def __init__(self,data):
		self.data = data
		self.left = 0
		self.right = 0


def BFS(root):
	q = []
	q.append(root)
	while(len(q)>0):
		a = q[0]
		print(a.data,end =" ")
		if(a.left != 0):
			q.append(a.left)
		if(a.right != 0):
			q.append(a.right)
		q.pop(0)

	


if __name__ == '__main__':
	root = Node(10)
	root.left = Node(5)
	root.right = Node(3)
	root.right.right = Node(15)
	root.right.left = Node(12)
	root.left.left = Node(6)
	root.left.right = Node(10)
	BFS(root);
