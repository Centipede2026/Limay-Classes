import java.io.*;    //Standard input and output
import java.util.*;  //utility classes are present

public class Array4 {
    public static void main(String[] args) {
        int[] x = new int[5];
        BufferedReader br = null;
        try {
            br = new BufferedReader(new InputStreamReader(System.in));
        } catch (Exception e) {
            // TODO: handle exception
        }
        int i = 0;
        while (i < x.length) {
            try {
                x[i] = Integer.parseInt(br.readLine());
            } catch (Exception e) {
                // TODO: handle exception
                continue;
            }
            i++;
        }
        String str = "Data\n" + Arrays.toString(x);
        System.out.println(str);
        
        //Sort
        Arrays.sort(x);
        str="Data\n"+ Arrays.toString(x);
        System.out.println(str);

        //binary search           Internally it's done using Quick Sort
        int res=Arrays.binarySearch(x,23);  //Search value
        if(res<0)
            System.out.println("Not Found");
        else
            System.out.println("Found");
    }
}
