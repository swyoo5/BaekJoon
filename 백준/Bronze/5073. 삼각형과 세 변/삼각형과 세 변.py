while True :
    sides = list(map(int, input().split()))
    if (sides[0] == 0 and sides[1] == 0 and sides[2] == 0) :
        break
        
    if (max(sides) < sum(sides) - max(sides)) :
        if (sides[0] == sides[1] and sides[1] == sides[2]) :
            print("Equilateral")
        elif (sides[0] == sides[1] or sides[1] == sides[2] or sides[2] == sides[0]) :
            print("Isosceles")
        else :
            print("Scalene")
    else :
        print("Invalid")