import java.util.*; 
import java.util.Vector; 
public class VectorMultiTypes {
    public static void main(String[] arg) 
    {   
        Vector<Integer> v2 = new Vector<Integer>(); 
  
        v2.add(1); 
        v2.add(2); 
        v2.add(3); 
        System.out.println("Vector v2 is " + v2); 

        Vector mhs = new Vector();
        mhs.add(4);
        mhs.add("budi");
        mhs.add(12.5);
        System.out.println("Vector mhs is " + mhs); 
    } 
}
