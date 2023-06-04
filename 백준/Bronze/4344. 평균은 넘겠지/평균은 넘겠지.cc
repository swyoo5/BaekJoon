#include <iostream>

using namespace std;

int main(void) {
    int C, i, j;
    int student_num;
    double result;

    cin >> C;

    for (i = 0; i < C; i++) {
        int count = 0;
        double average = 0;
        int student_score[1001] = { 0 };

        cin >> student_num;
        for (j = 0; j < student_num; j++) {
            cin >> student_score[j];
            average += student_score[j];
        }

        average = (double) average / student_num;

        for (j = 0; j < student_num; j++) {
            if (student_score[j] > average)
                count++;
        }

        result = (double) count / student_num * 100;

        cout << fixed;
        cout.precision(3);
        cout << result << "%" << endl;
    }
    return 0;
}