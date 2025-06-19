def minChange() -> int:
    n, m = map(int,I().split())
    con_belt = [list(I().strip()) for _ in range(n)]
    
    min_change = 0
    for _i in range(n):
        for _j in range (m):
            ch = con_belt[_i][_j]
            if (( _j == m - 1 and ch == 'R') or ( _i == n - 1 and ch == 'D')):
                min_change+=1
    return min_change

# test case run
I = input
t = int(I())
for i in range(t):
    print(minChange())
    
