n = int(input())
start = 1
end = 1
multiple = 0
room = 1
while True :
    if (start <= n <= end) :
        print(room)
        break
    
    multiple += 1
    start = end + 1
    end = end + 6 * multiple
    room += 1
