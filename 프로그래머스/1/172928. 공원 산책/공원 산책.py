def solution(park, routes):
    coord = [list(row) for row in park]
    cur_x = 0
    cur_y = 0
    height, width = len(coord), len(coord[0])
    for x in range(height) :
        for y in range(width) :
            if coord[x][y] == 'S' :
                cur_x = x
                cur_y = y
                
    dir = ['N', 'E', 'S', 'W']
    dx = [-1, 0, 1, 0]
    dy = [0, 1, 0, -1]
    
    
    for command in routes : 
        direction, distance = command.split() 
        distance = int(distance)
        for idx in range(len(dir)) :
            if direction == dir[idx] :
                temp_x, temp_y = cur_x, cur_y 
                for _ in range(distance) :
                    cur_x += dx[idx] 
                    cur_y += dy[idx] 
                    
                    if cur_x < 0 or cur_x > height - 1 or cur_y < 0 or cur_y > width - 1: 
                        cur_x, cur_y = temp_x, temp_y 
                        break
                    
                    if (coord[cur_x][cur_y] == 'X') : 
                        cur_x, cur_y = temp_x, temp_y 
                        break
                    
                    
    answer = [cur_x, cur_y]
    return answer