def solution(wallpaper):
    answer = []
    height = len(wallpaper)
    width = len(wallpaper[0])
    
    min_x, min_y, max_x, max_y = height, width, 0, 0
    for x in range(height) :
        for y in range(width) :
            if wallpaper[x][y] == '#' :
                if min_x > x : min_x = x
                if min_y > y : min_y = y
                if max_x < x : max_x = x
                if max_y < y : max_y = y
    answer = [min_x, min_y, max_x + 1, max_y + 1]
    return answer