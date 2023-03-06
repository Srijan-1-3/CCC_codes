n = int(input())
a = list(map(int, input().split()))

max_right = 0
for i in range(n-1, -1, -1):
    temp = a[i]
    a[i] = max_right
    max_right = max(max_right, temp)
a[n-1] = 0

print(*a)
