import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int min = 1000000, max = -1000000;
        int num;
        
        for (int i = 0; i < n; i++) {
            num = s.nextInt();
            if (num > max) max = num;
            if (num < min) min = num;
        }
        System.out.printf("%d %d", min, max);
        s.close();
    }
}