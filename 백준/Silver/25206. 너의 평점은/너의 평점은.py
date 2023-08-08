grade_list = ["A+", "A0", "B+", "B0", "C+", "C0", "D+", "D0", "F"]
score_list = [4.5, 4.0, 3.5, 3.0, 2.5, 2.0, 1.5, 1.0, 0.0]
total_score = 0.0
total_credit = 0.0

for _ in range(20) :
    name, credit, score = input().split()
    credit = float(credit)
    if (score != 'P') :
        total_credit += credit
        grade_index = grade_list.index(score)
        total_score += score_list[grade_index] * credit
            
average_grade = total_score / total_credit
print(average_grade)