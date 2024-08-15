import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        boolean remainder[] = new boolean[42];
        Scanner sc = new Scanner(System.in);
        int result = 0;
        for (int i = 0; i < 42; i++) {
            remainder[i] = false;
        }
        
        for (int i = 0; i < 10; i++) {
            int num = sc.nextInt();
            remainder[num % 42] = true;
        }
        
        for (int i = 0; i < 42; i++) {
            if (remainder[i]) {
                result++;
            }
        }
        
        System.out.println(result);
    }
}