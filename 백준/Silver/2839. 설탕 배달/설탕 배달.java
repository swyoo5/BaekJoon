import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int weight = scanner.nextInt();
        
        int[] dp = new int[weight + 1];
        
        for (int i = 1; i <= weight; i++) {
            dp[i] = -1;
        }
        
        if (weight >= 3) {
            dp[3] = 1;
        }
        
        if (weight >= 5) {
            dp[5] = 1;
        }
        
        for (int i = 6; i <= weight; i++) {
            if (dp[i - 3] != -1) {
                dp[i] = dp[i - 3] + 1;
            }
            
            if (dp[i - 5] != -1) {
                dp[i] = dp[i - 5] + 1;
            }
            
            if (dp[i - 3] != -1 && dp[i - 5] != -1) {
                dp[i] = Math.min(dp[i - 3], dp[i - 5]) + 1;
            }
        }
        
        System.out.println(dp[weight]);
    }
}