import java.util.Scanner;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt();
        
        Long[] arr = new Long[n];
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextLong();
        }
        
        Arrays.sort(arr);
        
        if (n % 2 == 1) {
            n--;
        }
        
        long min = 0;
        for (int i = 0; i < n / 2; i++) {
            if (min < arr[i] + arr[n - i - 1]) {
                min = arr[i] + arr[n - i - 1];
            }
        }
        
        System.out.println(min);
    }
}