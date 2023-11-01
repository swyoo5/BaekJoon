def manhattan(hand_x, hand_y, x, y) :
    return abs(hand_x - x) + abs(hand_y - y)

def solution(numbers, hand):
    number_coord = {
        1 : (0, 0), 2 : (0, 1), 3 : (0, 2),
        4 : (1, 0), 5 : (1, 1), 6 : (1, 2),
        7 : (2, 0), 8 : (2, 1), 9 : (2, 2),
        0 : (3, 1)
    }
    
    left_coord = (3, 0) # 왼쪽 엄지 좌표
    right_coord = (3, 2) # 오른쪽 엄지 좌표
    
    answer = ''
    for num in numbers :
        coord = number_coord[num]
        if num in [1, 4, 7] :
            answer = answer + 'L'
            left_coord = coord
        elif num in [3, 6, 9] :
            answer = answer + 'R'
            right_coord = coord
        else :
            target_coord = coord
            left_distance = manhattan(left_coord[0], left_coord[1], target_coord[0], target_coord[1])
            right_distance = manhattan(right_coord[0], right_coord[1], target_coord[0], target_coord[1])
            if left_distance > right_distance :
                answer = answer + 'R'
                right_coord = coord
            elif left_distance < right_distance :
                answer = answer + 'L'
                left_coord = coord
            else :
                if hand == "right" :
                    answer = answer + 'R'
                    right_coord = coord
                else :
                    answer = answer + 'L'
                    left_coord = coord
    return answer