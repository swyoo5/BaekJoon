#include <iostream>
#include <deque>

using namespace std;

int main(void) {
    deque<int> d;
    int n;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        string command;
        
        cin >> command;
        
        if (command == "push_front") {
            int number;
            cin >> number;
            
            d.push_front(number);
        } else if (command == "push_back") {
            int number;
            cin >> number;
            
            d.push_back(number);
        } else if (command == "pop_front") {
            if (d.empty()) {
                cout << -1 << '\n';
            } else {
                cout << d.front() << '\n';
                d.pop_front();
            }            
        } else if (command == "pop_back") {
            if (d.empty()) {
                cout << -1 << '\n';
            } else {
                cout << d.back() << '\n';
                d.pop_back();
            }
        } else if (command == "size") {
            cout << d.size() << '\n';
        } else if (command == "empty") {
            if (d.empty()) {
                cout << 1 << '\n';
            } else {
                cout << 0 << '\n';
            }
        } else if (command == "front") {
            if (d.empty()) {
                cout << -1 << '\n';
            } else {
                cout << d[0] << '\n';
            }
        } else if (command == "back") {
            if (d.empty()) {
                cout << -1 << '\n';
            } else {
                cout << d[d.size() - 1] << '\n';
            }
        }
    }
    return 0;
}