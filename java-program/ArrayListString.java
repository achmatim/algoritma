import java.util.ArrayList;
import java.util.Collections;

public class ArrayListString {
    public static void main(String args[]){  
        ArrayList<String> cities=new ArrayList<String>();  
        cities.add("London");
        cities.add("Paris");
        cities.add("Amsterdam");
        cities.add("Tokyo");
        cities.add("Singapura");
        cities.add("Jakarta");
    
        //displaying elements
        System.out.println(cities);
    
        //Adding "Steve" at the fourth position
        cities.add(3, "Sidney");
    
        //displaying elements
        System.out.println(cities);

        //Change an element
        cities.set(2, "New York");
        System.out.println(cities);

        //Remove an element
        cities.remove(3);
        cities.remove("Singapura");
        System.out.println(cities);

        //loop array list
        for(String str:cities)  {
            System.out.println(str);  
        }  

        //sort array list
        System.out.println("After sorting: ");
        Collections.sort(cities);
        for(String str:cities)  {
            System.out.println(str);  
        }
    }      
}
