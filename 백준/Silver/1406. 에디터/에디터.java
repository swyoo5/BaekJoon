import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        Stack<Character> leftStack = new Stack<>();
        Stack<Character> rightStack = new Stack<>();
        
        String str = br.readLine();
        
        for (char ch : str.toCharArray()) {
            leftStack.push(ch);
        }
        
        int commandNum = Integer.parseInt(br.readLine());
        for (int i = 0; i < commandNum; i++) {
            String command = br.readLine();
            char op = command.charAt(0);
            switch(op) {
                case 'L' :
                    if (!leftStack.empty()) {
                        rightStack.push(leftStack.pop());
                    }
                    break;
                case 'D' :
                    if (!rightStack.empty()) {
                        leftStack.push(rightStack.pop());
                    }
                    break;
                case 'B' :
                    if (!leftStack.empty()) {
                        leftStack.pop();
                    }
                    break;
                case 'P' :
                    char insertChar = command.charAt(2);
                    leftStack.push(insertChar);
                    break;
            }
        }
        
        while (!leftStack.empty()) {
            rightStack.push(leftStack.pop());
        }
        
        StringBuilder sb = new StringBuilder();
        while (!rightStack.empty()) {
            sb.append(rightStack.pop());
        }
        
        System.out.println(sb.toString());
    }
}