# 데이터 : ["코드 번호(code)", "제조일(date)", "최대 수량(maximum)", "현재 수량(remain)"]
# data : 데이터들이 담긴 이차원 정수 리스트
# ext : 어떤 정보를 기준으로 데이터를 뽑아낼지
# val_ext : 뽑아낼 정보의 기준값
# sort_by : 정보를 정렬할 기준이 되는 문자열

# ext 데이터가 val_ext보다 작은 데이터만 뽑은 후 sort_by 데이터 기준으로 오름차순 정렬
def solution(data, ext, val_ext, sort_by):
    answer = []
    properties = ["code", "date", "maximum", "remain"]
    d_idx, sort_idx = 0, 0
    
    for d in data :
        for p in properties :
            if ext == p :
                d_idx = properties.index(p)
            if sort_by == p :
                sort_idx = properties.index(p)
                
        if d[d_idx] < val_ext :
            answer.append(d)
    answer = sorted(answer, key = lambda x : x[sort_idx])
    return answer
