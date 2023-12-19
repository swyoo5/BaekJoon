def solution(n):
    mod = 1000000007
    dp = [0 for _ in range(n + 1)]
    dp[2], dp[4] = 3, 11
    for i in range(4, n + 1, 2) :
        dp[i] = dp[i - 2] * 3 + 2
        for j in range(i - 4, -1, -2) :
            dp[i] += dp[j] * 2
        dp[i] = dp[i] % mod
    return dp[n]