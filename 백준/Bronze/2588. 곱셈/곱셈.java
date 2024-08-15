import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int temp_b = b;
        int digit_1 = temp_b / 100;
        temp_b = temp_b % 100;
        int digit_2 = temp_b / 10;
        temp_b = temp_b % 10;
        int digit_3 = temp_b;
        
        System.out.println(a * digit_3);
        System.out.println(a * digit_2);
        System.out.println(a * digit_1);
        System.out.println(a * b);
    }
}