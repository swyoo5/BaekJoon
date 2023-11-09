# number : 기사 단원의 수
# limit : 협약으로 정해잔 공격력 제한
# power : 제한수치를 초과한 기사가 사용할 무기의 공격력
def solution(number, limit, power):
    number_power = [0] * (number + 1)
    for i in range(1, number + 1) :
        tmp_power = 0
        for j in range(1, int(i ** 0.5) + 1) :
            if i % j == 0 :
                tmp_power += 1
                if j ** 2 != i :
                    tmp_power += 1
        if tmp_power > limit :
            tmp_power = power
        number_power[i] = tmp_power
    
    answer = sum(number_power)
    return answer