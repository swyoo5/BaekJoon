import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        sc.nextLine();

        for (int i = 0; i < T; i++) {
            String sen = sc.nextLine(); // 문장 입력
            String senToWord[] = sen.split(" "); // 문장을 단어로 분리
            int wordNum = senToWord.length; // 분리한 단어의 개수
            for (int j = 0; j < wordNum; j++) {
                int wordLen = senToWord[j].length();
                String word = senToWord[j];
                String reversedWord = new StringBuilder(senToWord[j]).reverse().toString();
                System.out.print(reversedWord + " ");
            }
            System.out.println();
        }
        sc.close();
    }
}