def solution(a, b):
    days = [31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    week = ["FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"]
    month_to_day = 0
    for i in range(a - 1) :
        month_to_day += days[i]
    month_to_day += b
    
    answer = week[month_to_day % 7 - 1]
    return answer