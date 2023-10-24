def solution(nums):
    answer = 0
    length = len(nums)
    for i in range(length - 2) :
        for j in range(i + 1, length - 1) :
            for k in range(j + 1, length) :
                num = nums[i] + nums[j] + nums[k]
                if num % 2 :
                    is_prime = True
                    for l in range(3, int(num ** 0.5 + 1), 2) :
                        if num % l == 0 :
                            is_prime = False
                            break
                    if is_prime :
                        answer += 1
    return answer