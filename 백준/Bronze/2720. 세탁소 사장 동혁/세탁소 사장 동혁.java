import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt();
        
        int[] coins = {25, 10, 5, 1};
        for (int i = 0; i < n; i++) {
            int money = scanner.nextInt();
            int[] result = new int[4];
            
            for (int j = 0; j < coins.length; j++) {
                result[j] = money / coins[j];
                money = money % coins[j];
            }
            
            for (int j = 0; j < result.length; j++) {
                System.out.print(result[j] + " ");
            }
            System.out.println();
        }
    }
}