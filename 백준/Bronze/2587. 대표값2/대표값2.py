num_list = [int(input()) for _ in range(5)]
num_list = sorted(num_list)

average = int(sum(num_list) / 5)
median = num_list[2]

print(average)
print(median)