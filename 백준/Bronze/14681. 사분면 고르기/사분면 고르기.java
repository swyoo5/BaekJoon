import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x;
        int y;
        
        x = sc.nextInt();
        y = sc.nextInt();
        
        int result = 0;
        if (x > 0 && y > 0) {
            result = 1;
        } else if (x > 0 && y < 0) {
            result = 4;
        } else if (x < 0 && y > 0) {
            result = 2;
        } else if (x < 0 && y < 0) {
            result = 3;
        }
        
        System.out.println(result);
    }
}