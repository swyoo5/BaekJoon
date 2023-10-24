def solution(n, arr1, arr2):
    answer = []
    for idx in range(len(arr1)) :
        arr1_num = arr1[idx]
        arr2_num = arr2[idx]
        wall_str = ""
        for _ in range(len(arr1)) :
            if arr1_num % 2 == 1 or arr2_num % 2 == 1 :
                wall_str = '#' + wall_str
            else :
                wall_str = ' ' + wall_str
            arr1_num //= 2
            arr2_num //= 2
        answer.append(wall_str)
    return answer