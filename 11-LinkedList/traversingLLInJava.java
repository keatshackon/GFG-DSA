class Node{
	int data;
	Node next;
	Node(int x){
		data = x;
	}
}

class newLL{
	public static void main(String []args){
		Node h1 = new Node(10);
		Node h2 = new Node(100);
		Node h3 = new Node(1000);
		Node h4 = new Node(10000);
		Node h5 = new Node(100000);

		h1.next = h2;
		h2.next = h3;
		h3.next = h4;
		h4.next = h5;

		
		print(h1);

	}

	public static void print(Node head){
		while(head != null){
			if(head.next == null){
				System.out.print(head.data); 
				head = head.next;
			}else{
				System.out.print(head.data + "->");
				head = head.next;
			}
		}

	}
}