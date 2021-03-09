import java.util.Arrays;
public class ArrayEquality {
    public static void main(String args[]) { 
        String[] cities = new String[]{"London", "Paris", "Jakarta", "Tokyo", "HongKong"}; 
        String[] metros = new String[]{"London", "Paris", "Jakarta", "HongKong", "Tokyo"}; 
        String[] capitals = cities; 

        // comparing array using == operator 
        System.out.println("cities == metros : " + (cities == metros)); //false
        System.out.println("cities == capitals : " + (cities == capitals)); //true
        // comparing array using equals() method 
        
        System.out.println("cities.equals(metros) : " + cities.equals(metros)); //false
        System.out.println("cities.equals(capitals) : " + cities.equals(capitals)); //true
        
        // comparing array using Arrays.equals() method 
        System.out.println("Arrays.equals(cities, metros) : " + Arrays.equals(cities, metros)); //true
        System.out.println("Arrays.equals(cities, capitals) : " + Arrays.equals(cities, capitals)); //true
    } 
}

