def solution(arr):
    answer = [arr[0]] + [arr[i] for i in range(1, len(arr)) if arr[i - 1] != arr[i]]
    return answer