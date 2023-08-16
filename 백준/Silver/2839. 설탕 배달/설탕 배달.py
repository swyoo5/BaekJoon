weight = int(input())
min_num = 2000
for x_5 in range(weight // 5 + 1) :
    for x_3 in range(weight // 3 + 1) :
        if (5 * x_5 + 3 * x_3 == weight) :
            bag_num = x_5 + x_3
            if (min_num > bag_num) :
                min_num = bag_num

if (min_num == 2000) :
    print(-1)
else :
    print(min_num)