import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int year;
        
        year = sc.nextInt();
        
        int result = 0;
        if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
            result = 1;
        }
        
        System.out.println(result);
    }
}