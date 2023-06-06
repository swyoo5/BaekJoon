#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void) {
    double total_grade = 0.0, total_credit = 0.0;
    
    for (int i = 0; i < 20; i++) {
        double subject_credit, grade = 0.0;
        string subject_name, subject_grade;
        
        cin >> subject_name >> subject_credit >> subject_grade;
        
        if (subject_grade == "A+")
            grade = 4.5;
        else if (subject_grade == "A0") 
            grade = 4.0;
        else if (subject_grade == "B+")
            grade = 3.5;
        else if (subject_grade == "B0")
            grade = 3.0;
        else if (subject_grade == "C+")
            grade = 2.5;
        else if (subject_grade == "C0")
            grade = 2.0;
        else if (subject_grade == "D+")
            grade = 1.5;
        else if (subject_grade == "D0")
            grade = 1.0;
        else if (subject_grade == "F")
            grade = 0.0;
        else
            continue;
        
        total_grade += grade * subject_credit;
        total_credit += subject_credit;
    }
    double result = total_grade / total_credit;
    cout << result << endl;
    
    return 0;
}