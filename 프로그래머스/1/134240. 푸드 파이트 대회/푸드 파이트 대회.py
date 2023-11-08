def solution(food):
    answer = ''
    for i, num in enumerate(food) :
        answer += str(i) * (num // 2)
    answer = answer + '0' + answer[::-1]
    return answer