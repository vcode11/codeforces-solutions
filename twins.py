n = int(input())
l = list(map(int,input().split()))
l.sort(reverse = True)
v = 0
for i in l:
    v+=i
t = 0
for i in range(n):
    t+=l[i]
    if t > v - t:
        print(i+1)
        break
