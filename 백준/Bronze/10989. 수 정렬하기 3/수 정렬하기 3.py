import sys

n = int(input())
num_list = [0] * 10001

for _ in range(n) :
    num_list[int(sys.stdin.readline())] += 1 # 해당 숫자가 나오는 횟수 저장
    
for i in range(10001) : 
    if (num_list[i] != 0) : 
        for j in range(num_list[i]) : # 출현한 횟수만큼 해당 숫자 출력
            print(i)