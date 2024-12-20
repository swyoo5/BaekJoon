import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        String expression = scanner.next();
        
        String[] substract = expression.split("-");
        
        int result = 0;
        for (int i = 0; i < substract.length; i++) {
            String[] add = substract[i].split("\\+");
            int temp = 0;
            
            for (int j = 0; j < add.length; j++) {
            	temp += Integer.parseInt(add[j]);    
            }
            
            if (i == 0) {
                result += temp;
            } else {
                result -= temp;
            }
        }
        
        System.out.println(result);
    }
}