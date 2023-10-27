def solution(num_list):
    answer = 0
    num1, num2 = "", ""
    for num in num_list :
        if num % 2 == 0 :
            num1 = num1 + str(num)
        else :
            num2 = num2 + str(num)
    num1, num2 = int(num1), int(num2)
    
    answer = num1 + num2
    return answer