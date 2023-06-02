#include <iostream>

using namespace std;

int main(void) {
    int hour, min, add_time;
    
    cin >> hour >> min >> add_time;
    min += add_time;
    
    if (min >= 60) {
        hour += min / 60;
        min = min % 60;
        if (hour >= 24) {
            hour -= 24;
        }
    }
    cout << hour << ' ' << min << endl;
    return 0;
}