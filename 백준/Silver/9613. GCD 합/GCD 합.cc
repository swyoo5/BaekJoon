#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int a, int b);
int main(void) {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        long long *num_arr = new long long[n];
        for (int i = 0; i < n; i++) {
            cin >> num_arr[i];
        }
        
        long long sum_gcd = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int num1 = num_arr[i];
                int num2 = num_arr[j];
                
                if (num1 < num2) {
                    swap(num1, num2);
                }
                
                sum_gcd += gcd(num1, num2);
            }
        }
        cout << sum_gcd << '\n';
    }
    return 0;
}

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}