
public class BinTree {
    private BinTree left;
    private BinTree right;
    private int data;

    public BinTree(int data) {
        this.data = data;
    }

    public void set(int data) {
        this.data = data;
    }
    
    public void setL(BinTree node) {
        this.left = node;
    }

    public void setR(BinTree node) {
        this.right = node;
    }

    public int get() {
        return this.data;
    }

    public static void inorderPrint(BinTree root) {
        if (root == null) return;
        inorderPrint(root.left);
        System.out.print(root.data + " ");
        inorderPrint(root.right);
    }

    public static void main(String[] args) {
        BinTree a = new BinTree(5);
        BinTree b = new BinTree(8);
        BinTree c = new BinTree(4);
        BinTree d = new BinTree(2);
        BinTree e = new BinTree(10);
        a.setL(b);
        a.setR(c);
        b.setL(d);
        b.setR(e);
        BinTree.inorderPrint(a);
    }
}



        



