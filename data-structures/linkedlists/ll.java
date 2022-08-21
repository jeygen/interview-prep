public class LL {
	public Node head;

	public void addTail(int data) {
		if (this.head == null) {
			this.head = new Node(data);
		}
		Node end = new Node(data);
		Node n = this.head;
		while (n.next != null) {
			n = n.next;
		}
		n.next = end;
	}	
	
	public void rm(int data) {
		if (data == this.head.data) {
			this.head = this.head.next;
			return;
		}
		Node n = new Node(data);
		while (n.next != null) {
			n = n.next;
			if (data == n.data) {
				this.head.next = n.next;
		} 	
		}
	}

	public void print() {
		Node n = this.head;
		while (n.next != null) {
			n = n.next;
			System.out.println(n.data);
		}
	}


	public static void main(String[] args) {
		LL list = new LL();
		list.addTail(1);
		list.addTail(2);
		list.addTail(3);
		list.print();
	}
}
