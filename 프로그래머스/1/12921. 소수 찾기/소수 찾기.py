def solution(n):
    answer = 1
    if n == 2 : return answer

    for i in range(3, n + 1, 2) :
        is_prime = True
        for j in range(2, int(i ** 0.5 + 1)) :
            if i % j == 0 :
                is_prime = False
                break
        if is_prime :
            answer += 1
    return answer