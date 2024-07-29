import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int num1, num2;
        
        while (true) {
            num1 = s.nextInt();
            num2 = s.nextInt();
            if (num1 == 0 && num2 == 0) {
                break;
            } else {
                System.out.println(num1 + num2);
            }
        }
        s.close();
    }
}