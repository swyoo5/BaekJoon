def solution(n):
    trinary = ""
    while (n != 0) :
        trinary = str(n % 3) + trinary
        n //= 3
    
    answer = 0
    for i in range(len(trinary)) :
        if trinary[i] == '0' :
            continue
        elif trinary[i] == '1' :
            answer += 3 ** i
        else :
            answer += 2 * 3 ** i
            
    return answer