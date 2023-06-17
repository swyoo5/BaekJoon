#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int rev(int n);

int main(void) {
    int a, b;

    cin >> a >> b;

    int result = rev(rev(a) + rev(b));

    cout << result << endl;

    return 0;
}

int rev(int n) {
    string s = to_string(n);
    reverse(s.begin(), s.end());
    return atoi(s.c_str());
}