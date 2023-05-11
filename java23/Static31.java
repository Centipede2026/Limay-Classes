import java.io.*;
import java.util.*;

class Static31 {
    static int x[][];
    static BufferedReader br;
    static {
        x = new int[3][3];
        try {
            br = new BufferedReader(new InputStreamReader(System.in));
        } catch (Exception e) {
        }
    }

    static void input(int p[][]) {
        int i = 0, j = 0;
        while (i < 3) {
            i = 0;
            while (j < 3) {
                System.out.println("Data: ");
                try {
                    p[i][j] = Integer.parseInt(br.readLine());
                } catch (Exception e) {
                    continue;
                }
                j++;
            }
            i++;
        }
    }

    static String toStringObject(int p[][]) {
        String a = "Matrix" + Arrays.toString(p[0]) + "\n" + Arrays.toString(p[1]) + "\n" + Arrays.toString(p[2])
                + "\n";
        return a;
    }

    static void display(int q[][]) {
        System.out.println(toStringObject(q));
    }

    public static void main(String[] args) {
        input(x);
        display(x);
    }
}