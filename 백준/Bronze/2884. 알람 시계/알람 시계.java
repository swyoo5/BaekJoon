import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int hour;
        int minute;
        
        hour = sc.nextInt();
        minute = sc.nextInt();
        
        hour = ((minute - 45 < 0) ? hour - 1 : hour);
        hour = ((hour < 0) ? hour + 24 : hour);
        minute = ((minute - 45 < 0) ? minute + 15 : minute - 45);
        
        System.out.printf("%d %d", hour, minute);
        
        sc.close();
    }
}