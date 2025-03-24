n, a = int(input()), list(map(int, input().split()))
res = []
ans = 0
for i in range(n):
	pos = -1
	for j in range(n):
		if (pos == -1 or a[j] > a[pos]): pos = j
	res.append(pos + 1)
	ans += i * a[pos] + 1
	a[pos] = 0
print(ans)
print(' '.join([str(x) for x in res]))