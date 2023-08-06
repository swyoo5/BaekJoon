total_price = int(input())
goods_num = int(input())

result_price = 0
for _ in range(goods_num) :
    goods_price, num = map(int, input().split())
    result_price += goods_price * num
    
if (total_price == result_price) :
    print("Yes")
else :
    print("No")