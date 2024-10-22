import java.util.Scanner;
class Stack {
    private int stack[] = new int[10001];
    private int top = 0;
    
    public void push(int x) {
        stack[top++] = x;
    }
    
    public int pop() {
        if (top == 0) {
            return -1;
        }
        return stack[--top];
    }
    
    public int size() {
        return top;
    }
    
    public int empty() {
        if (top == 0) {
            return 1;
        }
        return 0;
    }
    
    public int top() {
        if (top == 0) {
            return -1;
        }
        return stack[top - 1];
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Stack stack = new Stack();
        
        int n = sc.nextInt();
        for (int i = 0; i < n; i++) {
            String command = sc.next();
            switch(command) {
                case "push" :
                    int x = sc.nextInt();
                    stack.push(x);
                    break;
                case "pop" :
                    System.out.println(stack.pop());
                    break;
                case "size" :
                    System.out.println(stack.size());
                    break;
                case "empty" :
                    System.out.println(stack.empty());
                    break;
                case "top" :
                    System.out.println(stack.top());
                    break;
            }
        }
    }
}