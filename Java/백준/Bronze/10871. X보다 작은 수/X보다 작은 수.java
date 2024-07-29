import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int arrLength = s.nextInt();
        int value = s.nextInt();
        int element;
        
        for (int i = 0; i < arrLength; i++) {
            element = s.nextInt();
            if (element < value) {
                System.out.print(element + " ");
            }
        }
        s.close();
    }
}