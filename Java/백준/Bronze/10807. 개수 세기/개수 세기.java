import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n, element, value, count = 0;
        
        n = s.nextInt();
        int arr[] = new int[n];
        
        for (int i = 0; i < n; i++) {
            arr[i] = s.nextInt();
        }
        value = s.nextInt();
        
        for (int i : arr) {
            if (i == value) {
                count += 1;
            }
        }
        System.out.println(count);
    }
}