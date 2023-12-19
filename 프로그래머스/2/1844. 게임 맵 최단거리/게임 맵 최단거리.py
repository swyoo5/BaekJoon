from collections import deque

def solution(maps):
    answer = 0
    dx, dy = [0, 0, 1, -1], [1, -1, 0, 0]
    height, width = len(maps), len(maps[0])
    
    queue = deque()
    queue.append((0, 0))
    
    while queue :
        x, y = queue.popleft()
        for i in range(4) :
            cur_x = x + dx[i]
            cur_y = y + dy[i]
            if 0 <= cur_x < height and 0 <= cur_y < width and maps[cur_x][cur_y] == 1 :
                maps[cur_x][cur_y] = maps[x][y] + 1
                queue.append((cur_x, cur_y))
    answer = maps[height - 1][width - 1]          
    if answer == 1 :
        answer = -1
    return answer