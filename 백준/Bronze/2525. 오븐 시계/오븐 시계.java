import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int hour;
        int minute;
        int cookTime;
        
        hour = sc.nextInt();
        minute = sc.nextInt();
        cookTime = sc.nextInt();
        
        minute += cookTime;
        hour += minute / 60;
        minute %= 60;
        hour %= 24;
        
        System.out.printf("%d %d", hour, minute);
        sc.close();
    }
}