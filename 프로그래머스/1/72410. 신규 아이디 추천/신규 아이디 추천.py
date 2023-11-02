def solution(new_id):
    # 1. 소문자 치환
    answer = new_id.lower()
    tmp_answer = ""
    for chr in answer :
        # 2. 알파벳 소문자, 숫자, -, _, .를 제외한 모든 문자 제거
        if chr.islower() or chr.isdigit() or chr == '-' or chr == '_' or chr == '.' :
            tmp_answer = tmp_answer + chr
    answer = tmp_answer
    
    # 3. 연속된 마침표를 하나로 대체
    while '..' in answer :
        answer = answer.replace('..', '.')
        
    # 4. 마침표가 처음이나 끝에 있으면 제거
    if len(answer) > 0 and answer[0] == '.' :
        answer = answer[1 :]
    if len(answer) > 0 and  answer[-1] == '.' :
        answer = answer[0 : -1]
    
    # 5. 빈 문자열 => 'a' 대입
    if len(answer) == 0 :
        answer = 'a'
    
    # 6. 길이가 16 이상이면 첫 15개의 문자만 남김
    if len(answer) >= 16 :
        answer = answer[ : 15]
        # 마침표가 끝에 있다면 마침표 제거
        if answer[-1] == '.' :
            answer = answer[0 : -1]
    
    # 7. 길이가 2자 이하라면 길이가 3이 될때까지 마지막 문자를 붙인다.
    if len(answer) <= 2 :
        end = answer[-1]
        while len(answer) != 3 :
            answer = answer + end
    return answer
