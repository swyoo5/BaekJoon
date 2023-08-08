A = [list(map(int, input().split())) for _ in range(9)]
    
max_num = 0
row = 0
col = 0
for i in range(9) :
    for j in range(9) :
        if (max_num <= A[i][j]) :
            max_num = A[i][j]
            row = i + 1
            col = j + 1
            
print(max_num)
print(row, col)