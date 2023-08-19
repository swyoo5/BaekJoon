word = input()
dial = ["ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"]

time = 0
for alphabet in word :
    for button in dial :
        if alphabet in button :
            time += (dial.index(button) + 3)
            
print(time)