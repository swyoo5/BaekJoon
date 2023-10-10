def solution(my_string, overwrite_string, s):
    answer = ''
    answer_len = s + len(overwrite_string)
    my_string_len = len(my_string)
    if (answer_len >= my_string_len) :
        answer += my_string[ : s] + overwrite_string
    else :
        answer += my_string[ : s] + overwrite_string + my_string[s + len(overwrite_string) : ]
    return answer