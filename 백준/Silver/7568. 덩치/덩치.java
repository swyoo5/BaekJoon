import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt();
        int[][] info = new int[n][2];
        
        for (int i = 0; i < n; i++) {
            info[i][0] = scanner.nextInt();
            info[i][1] = scanner.nextInt();
        }
        
        for (int i = 0; i < n; i++) {
            int rank = 1;
            for (int j = 0; j < n; j++) {
                if (i == j) {
                    continue;
                }
                
                if (info[i][0] < info[j][0] &&
                   info[i][1] < info[j][1]) {
                    rank++;
                }
            }
            System.out.print(rank + " ");
        }
    }
}