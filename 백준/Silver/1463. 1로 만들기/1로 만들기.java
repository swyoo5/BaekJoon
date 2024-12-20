import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int num = scanner.nextInt();
        
        int[] dp = new int[num + 1];
        dp[1] = 0;
        
        for (int i = 2; i <= num; i++) {
            dp[i] = dp[i - 1] + 1;
            
            if (i % 2 == 0) {
                dp[i] = Math.min(dp[i / 2] + 1, dp[i]);
            }
            
            if (i % 3 == 0) {
                dp[i] = Math.min(dp[i / 3] + 1, dp[i]);
            }
        }
        
        System.out.println(dp[num]);
    }
}