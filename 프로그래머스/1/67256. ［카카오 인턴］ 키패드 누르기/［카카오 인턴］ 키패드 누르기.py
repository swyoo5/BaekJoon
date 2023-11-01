def manhattan(hand_x, hand_y, x, y) :
    return abs(hand_x - x) + abs(hand_y - y)

def solution(numbers, hand):
    answer = ''
    left_x, left_y = 3, 0 # 왼쪽 엄지 좌표
    right_x, right_y = 3, 2 # 오른쪽 엄지 좌표
    
    # 숫자 : y좌표 딕셔너리
    left_num = {1 : 0, 4 : 1, 7 : 2} 
    middle_num = {2 : 0, 5 : 1, 8 : 2, 0 : 3}
    right_num = {3 : 0, 6 : 1, 9 : 2}
    
    for num in numbers :
        if num in left_num.keys() :
            answer = answer + 'L'
            left_x, left_y = left_num[num], 0
        elif num in right_num.keys() :
            answer = answer + 'R'
            right_x, right_y = right_num[num], 2
        else :
            target_x, target_y = middle_num[num], 1
            left_distance = manhattan(left_x, left_y, target_x, target_y)
            right_distance = manhattan(right_x, right_y, target_x, target_y)
            if left_distance > right_distance :
                answer = answer + 'R'
                right_x, right_y = target_x, target_y
            elif left_distance < right_distance :
                answer = answer + 'L'
                left_x, left_y = target_x, target_y
            else :
                if hand == "right" :
                    answer = answer + 'R'
                    right_x, right_y = target_x, target_y
                else :
                    answer = answer + 'L'
                    left_x, left_y = target_x, target_y   
    return answer