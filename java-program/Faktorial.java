public class Faktorial {
    /*
    Fungsi menghitung faktorial tanpa rekursif
    */
    public long faktorialTanpaRekursif(int N) {
        long hasil = 1;
        for (int i = N; i>=1; i--) {
            hasil = hasil * i;
        }
        return hasil;
    }

    /*
    Fungsi menghitung faktorial dengan rekursif
    */
    public long faktorialDenganRekursif(int N) {
        long hasil = 1;
        if (N==0) return 1;
        hasil = faktorialDenganRekursif(N-1);
        return N * hasil;
    }
}
