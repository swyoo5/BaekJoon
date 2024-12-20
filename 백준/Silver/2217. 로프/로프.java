import java.util.Arrays;
import java.util.Scanner;
import java.util.Comparator;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt();
        
        int min = Integer.MAX_VALUE;
        
        Integer[] weight = new Integer[n];
        for (int i = 0; i < n; i++) {
            weight[i] = scanner.nextInt();
        }
        
        Arrays.sort(weight, Comparator.reverseOrder());
        
        int max_weight = 0;
        for (int i = 0; i < weight.length; i++) {
        	int temp = weight[i] * (i + 1);
        	if (max_weight < temp) {
        		max_weight = temp;
        	}
        }
        scanner.close();
        System.out.println(max_weight);
    }
}