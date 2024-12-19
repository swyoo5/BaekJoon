import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int seed = scanner.nextInt();
        
        int[] stockPrice = new int[14];
        for (int i = 0; i < 14; i++) {
            stockPrice[i] = scanner.nextInt();
        }
        
        int bnpBalance = 0; // 보유 수량
        int bnpSeed = seed; // 현금
        for (int i = 0; i < 14; i++) {
            // bnp 매수
            bnpBalance += bnpSeed / stockPrice[i];
            bnpSeed = bnpSeed % stockPrice[i];
        }
        // bnp 매도
        bnpSeed += bnpBalance * stockPrice[13];
        bnpBalance = 0;
        
        int timingBalance = 0;
        int timingSeed = seed;
        for (int i = 3; i < 14; i++) {
            // timing 매수(3일 하락)
            if (stockPrice[i - 3] > stockPrice[i - 2] &&
               stockPrice[i - 2] > stockPrice[i - 1] &&
               stockPrice[i - 1] > stockPrice[i]) {
                timingBalance += timingSeed / stockPrice[i];
                timingSeed = timingSeed % stockPrice[i];
            }
            
            // timing 매도(3일 상승)
            if (stockPrice[i - 3] < stockPrice[i - 2] &&
               stockPrice[i - 2] < stockPrice[i - 1] &&
               stockPrice[i - 1] < stockPrice[i]) {
                timingSeed += timingBalance * stockPrice[i];
                timingBalance = 0;
            }
        }
        
        if (timingBalance != 0) {
            timingSeed += timingBalance * stockPrice[13];
            timingBalance = 0;
        }
        
        String result = "";
        if (bnpSeed > timingSeed) {
            result = "BNP";
        } else if (bnpSeed < timingSeed) {
            result = "TIMING";
        } else {
            result = "SAMESAME";
        }
        
        System.out.println(result);
    }
}