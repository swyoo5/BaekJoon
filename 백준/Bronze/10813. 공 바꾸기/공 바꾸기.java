import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        int bucketNum = scanner.nextInt();
        int iterNum = scanner.nextInt();
        int bucket[] = new int[bucketNum];
        
        for (int i = 0; i < bucket.length; i++) {
            bucket[i] = i + 1;
        }
        
        for (int i = 0; i < iterNum; i++) {
            int index1 = scanner.nextInt();
            int index2 = scanner.nextInt();
            int temp = bucket[index1 - 1];
            
            bucket[index1 - 1] = bucket[index2 - 1];
            bucket[index2 - 1] = temp;
        }
        
        for (int i : bucket) {
            System.out.printf("%d ", i);
        }
        scanner.close();
    }
}