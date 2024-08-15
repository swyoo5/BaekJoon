import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        boolean submit[] = new boolean[30];
        
        for (int i = 0; i < submit.length; i++) {
            submit[i] = false;
        }
        
        for (int i = 0; i < 28; i++) {
            int num = sc.nextInt();
            submit[num - 1] = true;
        }
        
        for (int i = 0; i < submit.length; i++) {
            if (submit[i] == false) {
                System.out.println(i + 1);
            }
        }
    }
}