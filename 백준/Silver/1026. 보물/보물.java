import java.util.Scanner;
import java.util.Arrays;
import java.util.Comparator;

public class Main {
	public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt();
        
        Integer[] a = new Integer[n];
        Integer[] b = new Integer[n];
        
        for (int i = 0; i < n; i++) {
            a[i] = scanner.nextInt();
        }
        
        for (int i = 0; i < n; i++) {
            b[i] = scanner.nextInt();
        }
        
        Arrays.sort(a);
        Arrays.sort(b, Comparator.reverseOrder());
        
        int result = 0;
        for (int i = 0; i < n; i++) {
            result += a[i] * b[i];
        }
        
        System.out.println(result);
    }
}