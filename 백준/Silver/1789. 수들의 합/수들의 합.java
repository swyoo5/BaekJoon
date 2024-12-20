import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        long n = scanner.nextLong();
        
        long sum = 0;
        int result = 0;
        for (int i = 1; ; i++) {
            if (sum > n) {
                result--;
                break;
            } else {
                sum += i;
                result++;
            }
        }
        
        System.out.println(result);
    }
}