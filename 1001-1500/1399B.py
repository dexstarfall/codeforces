def minMoves():
    #input
    n = int(input())
    candies = list(map(int,input().split()))
    oranges = list(map(int,input().split()))
    
    #solution
    min_candies = min(candies)
    min_oranges = min(oranges)
    min_moves = 0
    for i in range(n):
        eat_candies = candies[i] - min_candies
        eat_oranges = oranges[i] - min_oranges
        
        min_moves += eat_candies + eat_oranges
        if(eat_candies > 0 and eat_oranges > 0):
            min_moves -= min(eat_candies, eat_oranges)
    print(min_moves)


t = int(input())
for i in range(t):
    minMoves()
