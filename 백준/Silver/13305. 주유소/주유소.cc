#include <iostream>

using namespace std;

int main(void) {
    int city;
    cin >> city;
    
    int *distance = new int[city - 1];
    int *price = new int[city - 1]; // 마지막 도시의 기름가격은 필요없음
    
    long rest_distance = 0;
    for (int i = 0; i < city - 1; i++) {
        cin >> distance[i];
        rest_distance += distance[i];
    }
    
    int min_price = 10001;
    for (int i = 0; i < city; i++) {
        cin >> price[i];
        if (min_price > price[i]) {
            min_price = price[i];
        }
    }
    
    long long total_price = 0;
    
    for (int i = 0; i < city - 1; i++) {
        if (min_price == price[i]) {
            total_price = min_price * (rest_distance);
        } else {
            total_price += distance[i] * price[i];
            rest_distance -= distance[i];
        }
    }
    cout << total_price << '\n';
    return 0;
}