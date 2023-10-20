def solution(n, m) :
    answer = []
    mul = m * n
    while n != 0 :
        temp = m % n
        m, n = n, temp
    gcd = m
    lcm = mul / m
    answer = [gcd, lcm]
    return answer