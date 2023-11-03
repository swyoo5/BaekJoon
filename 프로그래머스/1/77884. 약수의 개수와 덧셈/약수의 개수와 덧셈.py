def count_factor(num) :
    if num == 1 : return 1

    answer = 2
    for i in range(2, num) :
        if num % i == 0 :
            answer += 1
    return answer

def solution(left, right):
    answer = 0
    for num in range(left, right + 1) :
        if count_factor(num) % 2 == 0 :
            answer += num
        else :
            answer -= num
    return answer