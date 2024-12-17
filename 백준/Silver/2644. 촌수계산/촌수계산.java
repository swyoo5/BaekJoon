import java.util.Scanner;
import java.util.Queue;
import java.util.LinkedList;

public class Main {
    private static int[][] relation;
    private static int target2;
    private static int[] distance;
    private static boolean[] visited;
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int people = scanner.nextInt();
        int target1 = scanner.nextInt();
        target2 = scanner.nextInt();
        
        int relationNum = scanner.nextInt();
        relation = new int[people + 1][people + 1];
        visited = new boolean[people + 1];
        distance = new int[people + 1];
        
        for (int i = 0; i < relationNum; i++) {
            int parent = scanner.nextInt();
            int child = scanner.nextInt();
            
            relation[parent][child] = 1;
            relation[child][parent] = 1;
        }
        
        int result = bfs(target1);
        
        System.out.println(result);
    }
    
    public static int bfs(int start) {
        Queue<Integer> queue = new LinkedList<>();
        queue.add(start);
        visited[start] = true;
        
        while (!queue.isEmpty()) {
            int current = queue.poll();
            
            if (current == target2) {
                return distance[target2];
            }
            
            for (int i = 1; i < relation[0].length; i++) {
                if (relation[current][i] == 1 && !visited[i]) {
                    queue.add(i);
                    visited[i] = true;
                    distance[i] = distance[current] + 1;
                }
            }
        }
        
        return -1;
    }
}