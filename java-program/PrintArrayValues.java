import java.util.Arrays;
public class PrintArrayValues{ 
    public static void main(String args[]) { 
        // Example 1 : print int array in Java 
        int[] primes = {5, 7, 11, 17, 19, 23, 29, 31, 37}; 
        System.out.println("Prime numbers : " + primes); // Not OK 
        
        System.out.println("Real prime numbers : " + Arrays.toString(primes)); //Ok 
        
        // Example 2 : print String array in Java 
        String[] buzzwords = {"Java", "Android", "iOS", "Scala", "Python"}; 
        System.out.println("Buzzing .." + buzzwords); 
        System.out.println("Not buzzing? try again : " + Arrays.toString(buzzwords)); 
        
        // Example 3 : print two dimensional array in Java 
        String[][] phones = {{"Apple", "iPhone"}, {"Samsung", "Galaxy"}, {"Sony", "Xperia"}}; 
        System.out.println("Hot phones .. " + phones); 
        System.out.println("Not hot? See again.." + Arrays.deepToString(phones)); 
        
        // Example 4 : print byte array in Java 
        String random = "In Java programming langue, array is object"; 
        byte[] bytes = random.getBytes(); 
        System.out.println("What is inside bytes : " + bytes); 
        System.out.println("Not visible, check closely .." + Arrays.toString(bytes)); 
    } 
}
