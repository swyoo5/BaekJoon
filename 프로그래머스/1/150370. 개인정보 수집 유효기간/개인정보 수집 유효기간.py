def solution(today, terms, privacies):
    answer = []
    terms_dict = {}
    cur_year, cur_month, cur_day = map(int, today.split('.'))

    for term in terms :
        kind, period = term.split(' ')
        terms_dict[kind] = int(period) * 28

    for i in range(len(privacies)) : # 원소의 인덱스로 받음
        pri_date, pri_kind = privacies[i].split(' ')
        pri_year, pri_month, pri_day = map(int, pri_date.split('.'))

        year = (cur_year - pri_year) * 336
        month = (cur_month - pri_month) * 28
        day = (cur_day - pri_day)

        total = year + month + day
        if terms_dict[pri_kind] <= total :
            answer.append(i + 1)
    return answer