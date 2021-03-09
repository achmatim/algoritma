public class PerkalianRekursif {
    public static int perkalian(int m, int n) {
        int hasil;
        if (n == 1) {
            hasil = m;
        } else {
            hasil = m + perkalian(m, n-1);
        }
        return hasil;
    }
    public static void main(String[] args) {
        int A = 6;
        int B = 4;
        System.out.println("A x B = " + perkalian(A, B));
    }
}
