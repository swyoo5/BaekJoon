def solution(string):
    string = string.lower()
    p_count = string.count('p')
    y_count = string.count('y')
    
    if p_count == 0 and y_count == 0 :
        return True
    return p_count == y_count