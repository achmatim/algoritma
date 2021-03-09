import java.util.Arrays;
import java.util.ArrayList;
import java.util.Collections;

public class ArrayToArrayList {
    public static void main(String args[]) { 
        String[] arrCities = new String[]{"London", "Paris", "Jakarta", "HongKong", "Tokyo"}; 
        System.out.println("Array: "+ Arrays.toString(arrCities));

        //
        ArrayList<String> listCities = new ArrayList<String>();
        Collections.addAll(listCities, arrCities);

        System.out.println("List: "+ listCities);
    }
}

