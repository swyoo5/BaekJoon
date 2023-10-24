def solution(arr1, arr2):
    answer = []
    for i in range(len(arr1)) :
        row_result = []
        for j in range(len(arr1[0])) :
            temp = arr1[i][j] + arr2[i][j]
            row_result.append(temp)
        answer.append(row_result)
    return answer