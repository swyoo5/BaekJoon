import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x;
        int y;
        int z;
        
        x = sc.nextInt();
        y = sc.nextInt();
        z = sc.nextInt();
        
        int result = 0;
        if (x == y && y == z) {
            result = 10000 + 1000 * x;
        } else if (x == y || y == z) {
            result = 1000 + 100 * y;
        } else if (y == x || x == z) {
            result = 1000 + 100 * x;
        } else if (x == z || z == y) {
            result = 1000 + 100 * x;
        } else {
            if (x > y && x > z) {
                result = x * 100;
            } else if (y > x && y > z) {
                result = y * 100;
            } else if (z > x && z > y) {
                result = z * 100;
            }
        }
        System.out.println(result);
    }
}