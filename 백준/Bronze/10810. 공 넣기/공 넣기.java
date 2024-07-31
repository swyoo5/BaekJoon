import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int bucketNum = scanner.nextInt();
        int iterNum = scanner.nextInt();
        int bucket[] = new int[bucketNum];
        
        for (int i = 0; i < iterNum; i++) {
            int start = scanner.nextInt();
            int end = scanner.nextInt();
            int ball = scanner.nextInt();
            for (int j = start - 1; j <= end - 1; j++) {
                bucket[j] = ball;
            }
        }
        
        for (int i : bucket) {
            System.out.printf("%d ", i);
        }
        scanner.close();
    }
}