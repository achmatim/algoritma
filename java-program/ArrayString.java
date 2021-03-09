public class ArrayString {
    public static void main(String args[]) {
        String[] cities = new String[]{"London", "Paris", "Jakarta", "HongKong", "Tokyo"};
     
       for(int i=0;  i<cities.length;  i++){
           String city = cities[i];
           System.out.println("Current city is @ " + city);
       }

    }
}

