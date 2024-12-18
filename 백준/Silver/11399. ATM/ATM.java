import java.util.Scanner;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt();
        
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }
        
        Arrays.sort(arr);
        
        int result = 0;
        for (int i = 0; i < n; i++) {
            int temp = 0;
            for (int j = 0; j <= i; j++) {
                temp += arr[j];
            }
            result += temp;
        }
        
        System.out.println(result);
    }
}