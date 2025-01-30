k2, k3, k5, k6 = map(int, input().split())

min_oocur = min({k2, k5, k6})
remain_k2 = max( 0, k2 - min_oocur)

num_sum_256 = min_oocur* 256
num_sum_32 = min(remain_k2 ,k3) * 32
print(num_sum_256 + num_sum_32)

