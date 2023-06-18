#include <iostream>
#include <vector>

using namespace std;

int stack[10001];
int index = -1;

void push(int X);
int pop(void);
int size(void);
int empty(void);
int top(void);

int main(void) {
    string command;
    int num, input;
    
    cin >> input;
    while (input--) {
        cin >> command;
        if (command == "push") {
            cin >> num;
            push(num);
        } else if (command == "pop") {
            cout << pop() << endl;
        } else if (command == "size") {
            cout << size() << endl;
        } else if (command == "empty") {
            cout << empty() << endl;
        } else if (command == "top") {
            cout << top() << endl;
        }
    }
    return 0;
}

void push(int X) {
    stack[++index] = X;
} 

int pop(void) {
    if (index < 0) {
        return -1;
    }
    return stack[index--];
}

int size(void) {
    if (index < 0) {
        return 0;
    }
    return index + 1;
}

int empty(void) {
    if (index < 0) {
        return 1;
    }
    return 0;
}

int top(void) {
    if (index < 0) {
        return -1;
    }
    return stack[index];
}