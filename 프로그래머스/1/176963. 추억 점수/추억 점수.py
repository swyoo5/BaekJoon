def solution(name, score, photos):
    answer = []
    for photo in photos :
        score_sum = 0
        for person in photo :
            if person not in name :
                continue
            name_idx = name.index(person)
            score_sum += score[name_idx]
        answer.append(score_sum)
    return answer