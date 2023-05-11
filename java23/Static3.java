import java.io.*;
import java.util.*;

class Static3 {
    static int x[][];
    static BufferedReader br;
    static {
        x = new int[3][3];
        try {
            br = new BufferedReader(new InputStreamReader(System.in));
        } catch (Exception e) {
        }
    }

    static void input() {
        int i=0,j=0;
        while (i<3) {
            i=0;
            while (j<3) {
                System.out.println("Data: ");
                try {
                    x[i][j]=Integer.parseInt(br.readLine());
                } 
                catch (Exception e) {
                    continue;
                }
                j++;
            }
            i++;
        }
    }

    static String toStringObject()
    {
        String a="Matrix"+Arrays.toString(x[0])+"\n"+Arrays.toString(x[1])+"\n"+Arrays.toString(x[2])+"\n";
        return a;
    }

    static void display()
    {
        System.out.println(toStringObject());
    }

    public static void main(String[] args) {
        input();
        display();
    }
}