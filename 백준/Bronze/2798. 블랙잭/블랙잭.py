card_num, limit = map(int, input().split())
card_list = list(map(int, input().split()))

max_sum = 0
for i in range(card_num) :
    for j in range(i + 1, card_num) :
        for k in range(j + 1, card_num) :
            card_sum = card_list[i] + card_list[j] + card_list[k]
            if (max_sum < card_sum and card_sum <= limit) :
                max_sum = card_sum
            if (max_sum == limit) :
                print(max_sum)
                quit()
print(max_sum)