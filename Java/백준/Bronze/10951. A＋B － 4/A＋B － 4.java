import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int num1, num2;
        
        while (s.hasNextInt()) {
            num1 = s.nextInt();
            num2 = s.nextInt();
            System.out.println(num1 + num2);
        }
        s.close();
    }
}