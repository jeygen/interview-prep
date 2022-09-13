
public class BinTree {
    private BinTree left;
    private BinTree right;
    private int data;

    public BinTree(int data) {
        this.data = data;
    }

    void set(int data) {
        this.data = data;
    }
    
    void setL(BinTree node) {
        this.left = node;
    }

    void setR(BinTree node) {
        this.right = node;
    }
    int get() {
        return this.data;
    }

    void inorderPrint(BinTree root) {
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
    }
}



        



