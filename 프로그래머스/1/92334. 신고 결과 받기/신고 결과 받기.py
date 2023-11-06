def solution(id_list, report, k):
    answer = [0 for _ in range(len(id_list))]
    report_num = {id : 0 for id in id_list} # 신고당한 횟수
    
    for r in set(report) :
        reported = r.split()[1]
        report_num[reported] += 1 # 신고당한 횟수 추가
        
    for r in set(report) :
        report = r.split()[0] # 신고한 사람
        reported = r.split()[1] # 신고 당한 사람
        if report_num[reported] >= k : # 제한 횟수 k번을 넘기면
            answer[id_list.index(report)] += 1 # 신고한 사람에게 메일 1회 추가
    return answer