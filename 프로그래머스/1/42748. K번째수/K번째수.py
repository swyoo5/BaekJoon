def solution(array, commands):
    answer = []
    for command in commands :
        start, end, idx = command
        ans = sorted(array[start - 1 : end])[idx - 1]
        answer.append(ans)
    return answer