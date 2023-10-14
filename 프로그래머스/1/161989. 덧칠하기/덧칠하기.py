def solution(n, roller, section):
    answer = 1
    start = section[0]
    for i in range(1, len(section)) :
        if section[i] - start >= roller :
            answer += 1
            start = section[i]
    return answer