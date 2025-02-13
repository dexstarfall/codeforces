# one liner
# for s in[*open(0)][2::2]:print(len(set(s.split())))


t = int(input())
for i in range (t):
    input()
    print(len(set(map(int,input().split()))))