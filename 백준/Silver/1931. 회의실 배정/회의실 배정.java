import java.util.Scanner;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt();
        
        int[][] time = new int[n][2];
        
        for (int i = 0; i < n; i++) {
            time[i][0] = scanner.nextInt();
            time[i][1] = scanner.nextInt();
        }    
        
        Arrays.sort(time, (a, b) -> {
            if (a[1] == b[1]) {
                return Integer.compare(a[0], b[0]);
            } else {
                return Integer.compare(a[1], b[1]);
            }
        });
        
        int prevTime = 0;
        int result = 0;
        for (int i = 0; i < n; i++) {
            if (time[i][0] >= prevTime) {
                result++;
                prevTime = time[i][1];
            }
        }
        
        System.out.println(result);
    }
}