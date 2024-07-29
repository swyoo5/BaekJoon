import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        final int len = 9;
        int max = 0, num, maxIndex = 0;
        
        for (int i = 0; i < len; i++) {
            num = s.nextInt();
            if (num > max) {
                max = num;
                maxIndex = i + 1;
            }
        }
        System.out.printf("%d\n%d", max, maxIndex);
        s.close();
    }
}