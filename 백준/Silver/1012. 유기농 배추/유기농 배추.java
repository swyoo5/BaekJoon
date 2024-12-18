import java.util.Scanner;
import java.util.Queue;
import java.util.LinkedList;

public class Main {
    private static int[][] map;
    private static boolean[][] visited;
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int T = scanner.nextInt();
        
        for (int i = 0; i < T; i++) {
            int height = scanner.nextInt();
            int width = scanner.nextInt();
            int locNum = scanner.nextInt();
            
            map = new int[height][width];
            visited = new boolean[height][width];
            // 맵 입력
            for (int j = 0; j < locNum; j++) {
                int locX = scanner.nextInt();
                int locY = scanner.nextInt();
                map[locX][locY] = 1;
            }
            
            int result = 0;
            for (int j = 0; j < map.length; j++) {
                for (int k = 0; k < map[0].length; k++) {
                    // 맵에서 방문한적 없고, 방문 가능한 위치이면 bfs 수행
                    if (map[j][k] == 1 && visited[j][k] == false) {
                        bfs(map, j, k);
                        result++;
                    }
                }
            }
            
            System.out.println(result);
        }
    }
    
    public static void bfs(int[][] map, int x, int y) {
        Queue<Integer> queueX = new LinkedList<>();
        Queue<Integer> queueY = new LinkedList<>();
        
        int[] dx = {0, 0, 1, -1};
        int[] dy = {1, -1, 0, 0};
        
        queueX.add(x);
        queueY.add(y);
        
        while (!queueX.isEmpty()) {
            visited[x][y] = true;
            for (int i = 0; i < 4; i++) {
                queueX.poll();
                queueY.poll();
                int nx = x + dx[i];
                int ny = y + dy[i];
            
                if (validCoord(nx, ny) 
                    && !visited[nx][ny] && map[nx][ny] == 1) {
                    bfs(map, nx, ny);
                }
            }        
        }
    }
    
    public static boolean validCoord(int x, int y) {
        return (x >= 0 && x < map.length &&
               y >= 0 && y < map[0].length);
    }
}