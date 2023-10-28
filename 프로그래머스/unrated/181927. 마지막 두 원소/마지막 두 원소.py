def solution(num_list):
    end = 0
    if num_list[-1] > num_list[-2] :
        end = num_list[-1] - num_list[-2]
    else :
        end = num_list[-1] * 2
    answer = num_list
    answer.append(end)
    return answer