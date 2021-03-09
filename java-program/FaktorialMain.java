public class FaktorialMain {
    public static void main(String[] args){
        Faktorial f = new Faktorial();
        System.out.println("Faktorial tanpa rekursif: " + f.faktorialTanpaRekursif(5));

        System.out.println("Faktorial dengan rekursif: " + f.faktorialDenganRekursif(5));
    }
}