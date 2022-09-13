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

    int get() {
        return this.data;
    }
}

