_ = int(input())
inp = lambda: sorted (map(int, input().split()))
for __ in range (_):
    a1, b1 = inp()
    a2, b2 = inp()
    if b1 == b2 and a1 + a2 == b1:
        print("Yes")
    else:
        print ("No")
     
