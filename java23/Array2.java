import java.io.*;    //Standard input and output
import java.util.*;  //utility classes are present

public class Array2 {
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
    }
}
