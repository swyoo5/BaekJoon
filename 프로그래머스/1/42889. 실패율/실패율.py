def solution(N, stages):
    stages.sort()
    failure_dict = {i + 1 : 0 for i in range(N)}
    stages_len = len(stages)
    for i in range(1, N + 1) :
        if stages_len != 0 :
            failure = stages.count(i) / stages_len
            failure_dict[i] = failure
            stages_len -= stages.count(i)
        else :
            failure_dict[i] = 0
    
    sorted_by_value = [key for key, value in sorted(failure_dict.items(), key = lambda x : x[1], reverse = True)]
    
    return sorted_by_value