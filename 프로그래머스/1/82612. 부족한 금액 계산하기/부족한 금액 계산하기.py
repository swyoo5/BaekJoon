def solution(price, money, count):
    total_price = sum(price * i for i in range(1, count + 1))
    if money > total_price : 
        answer = 0
    answer = total_price
    return total_price - money if total_price > money else 0