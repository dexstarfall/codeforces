t= int(input())
for _ in range (t):
    n, a, b = map(int,input().split())
    for i in range (n):
        print(chr (97 +  i % b), end="")
    print()
