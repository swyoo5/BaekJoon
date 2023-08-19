base2 = input()

while (len(base2) % 3 != 0) :
    base2 = '0' + base2

base_8 = ""
for i in range(0, len(base2), 3) :
    digit = int(base2[i]) * 4 + int(base2[i + 1]) * 2 + int(base2[i + 2])
    base_8 = base_8 + str(digit)
    
print(base_8)