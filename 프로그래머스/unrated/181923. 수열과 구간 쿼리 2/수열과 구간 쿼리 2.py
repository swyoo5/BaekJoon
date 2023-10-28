def solution(arr, queries):
    answer = [-1 for _ in range(len(queries))]
    for idx, query in enumerate(queries) :
        start, end, small = query[0], query[1], query[2]
        sub_arr = sorted(arr[start : end + 1])
        for num in sub_arr :
            if num > small :
                answer[idx] = num
                break
            
    return answer