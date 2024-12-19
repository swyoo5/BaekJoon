import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int height = scanner.nextInt();
        int width = scanner.nextInt();
        scanner.nextLine();
        
        char[][] map = new char[height][width];
        int[][] time = new int[height][width];
        for (int i = 0; i < height; i++) {
            String row = scanner.nextLine();
            for (int j = 0; j < width; j++) {
                char element = row.charAt(j);
                map[i][j] = element;
                time[i][j] = -1;
            }
        }
        
        for (int i = 0; i < height; i++) {
            int minute = 0;
            boolean firstCloud = false;
            for (int j = 0; j < width; j++) {
                if (firstCloud) {
                    if (map[i][j] == 'c') {
                        minute = 0;
                        time[i][j] = minute++;
                    } else {
                        time[i][j] = minute++;
                    }
                } else {
                    if (map[i][j] == 'c') {
                        time[i][j] = minute++;
                        firstCloud = true;
                    } else {
                        continue;
                    }
                }
            }
        }
        
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                System.out.print(time[i][j] + " ");
            }
            System.out.println();
        }
    }
}