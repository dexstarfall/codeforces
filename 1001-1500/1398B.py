# solution
def aliceScore() -> int:
    game_str = input()
    count, alice_score = 0, 0
    num_list = []
    for i in range(len(game_str)):
        if (game_str[i] == '1'):
            count+=1
            if(i == len(game_str) -1):
                num_list.append(count)
        else:
            num_list.append(count)
            count = 0
    num_list.sort(reverse=True)
    for i in range (0,len(num_list),2):
        alice_score+=num_list[i]
    
    return alice_score

t = int(input())
for i in range(t):
    print (aliceScore())