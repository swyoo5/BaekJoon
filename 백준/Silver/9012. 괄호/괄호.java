import java.util.Scanner;

class Stack {
    private int top = -1;
    private char[] stack = new char[51];
    public Stack() {
        
    }
    
    public void push(char x) {
        stack[++top] = x;
    }
    
    public char pop() {
        if (!empty()) {
            return stack[top--];
        } else {
            return '\0';
        }
    }
    
    public boolean empty() {
        return top == -1;
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        sc.nextLine();
        
        for (int i = 0; i < T; i++) {
            Stack stack = new Stack();
            String parenthesis = sc.next();
            int len = parenthesis.length();
            boolean isBalanced = true;
            for (int j = 0; j < len; j++) {
                char p = parenthesis.charAt(j);
                if (p == '(') {
                    stack.push(p);
                } else if (p == ')') {
                    if (!stack.empty()) {
                        stack.pop();
                    } else {
                        isBalanced = false;
                        break;
                    }
                } 
            }
            
            if (isBalanced && stack.empty()) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}