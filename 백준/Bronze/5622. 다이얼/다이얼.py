word = input()
dial = ["ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"]
time = 0
for unit in dial :
    for alphabet in unit :
        for i in word :
            if i == alphabet :
                time += dial.index(unit) + 3
                
print(time)