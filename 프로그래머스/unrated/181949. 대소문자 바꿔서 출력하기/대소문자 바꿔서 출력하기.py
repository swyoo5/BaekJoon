str = input()
for alp in str :
    if alp.islower() :
        print(alp.upper(), end = '')
    else :
        print(alp.lower(), end = '')