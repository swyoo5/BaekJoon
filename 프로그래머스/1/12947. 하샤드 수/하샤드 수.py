def solution(x):
    answer = True
    digit_list = list(str(x))
    digit_sum = 0
    for digit in digit_list :
        digit_sum += int(digit)
    
    if x % digit_sum == 0 :
        return answer
    else :
        answer = False
        return answer