N, prize = map(int, input().split())
student = list(map(int, input().split()))

student = sorted(student, reverse = True)
print(student[prize - 1])