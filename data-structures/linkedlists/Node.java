public class Node {
	private int data;
	private Node next;

	public Node(int data) {
		this.data = data;
	}

	public addTail(int data) {
		Node end = new Node(data);
		Node n = this;
		while (n.next != null) {
			n.next = this.next;
		}
		n.next = end;
	}	
}
