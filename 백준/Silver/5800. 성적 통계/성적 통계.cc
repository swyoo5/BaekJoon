#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int T;
    
    cin >> T;
    
    for (int i = 0; i < T; i++) {
        int student;
        
        cin >> student;
        int *score = new int[student];
        
        for (int j = 0; j < student; j++) {
            cin >> score[j];
        }
        
        sort(score, score + student);
        
        int largest_gap = 0;
        for (int j = 0; j < student - 1; j++) {
            if (largest_gap < score[j + 1] - score[j]) {
                largest_gap = score[j + 1] - score[j];
            }
        }
        printf("Class %d\n", i + 1);
        printf("Max %d, Min %d, Largest gap %d\n", score[student - 1], score[0], largest_gap);
    }
    return 0;
}