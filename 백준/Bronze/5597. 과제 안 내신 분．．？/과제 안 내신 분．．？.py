student_list = [i for i in range(1, 31)]
for _ in range(28) :
    submit = int(input())
    student_list.remove(submit)
    
sorted(student_list)
print(student_list[0], student_list[1], end = '\n')