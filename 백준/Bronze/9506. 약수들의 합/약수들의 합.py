while True :
    n = int(input())
    if (n == -1) :
        break
        
    sum_of_factor = 1
    factor_list = []
    for i in range(2, n) :
        if (n % i == 0) :
            sum_of_factor += i
            factor_list.append(i)
            
    if (n == sum_of_factor) :
        print("%d = 1 " %(n), end = '')
        for i in factor_list :
            print("+ %d " %(i), end = '')
        print()
    else :
        print("%d is NOT perfect." %(n))
