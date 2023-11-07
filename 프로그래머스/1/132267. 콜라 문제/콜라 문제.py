def solution(a, b, n): # 2, 1, 20
    answer = 0
    while n >= a :
        answer += (n // a) * b
        n = (n // a) * b + (n % a)
        
    return answer