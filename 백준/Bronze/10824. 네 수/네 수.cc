#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int a, b, c, d;
    
    cin >> a >> b >> c >> d;
    
    string a1, c1;
    
    a1 = to_string(a) + to_string(b);
    c1 = to_string(c) + to_string(d);
    
    long long result = stoll(a1) + stoll(c1);
    cout << result << '\n';
    
    return 0;
}