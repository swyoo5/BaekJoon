def solution(string, skip, index) :
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    for s in skip :
        alphabet = alphabet.replace(s, '')
    
    answer = ""
    for alp in string :
        new = alphabet[(alphabet.index(alp) + index) % len(alphabet)]
        answer = answer + new
    return answer