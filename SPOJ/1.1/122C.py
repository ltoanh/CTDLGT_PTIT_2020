import math
for _ in range(int(input())):
    res=0
    n, x = map(int, input().split())
    x=str(x)
    print(str(math.factorial(n)).count(x))