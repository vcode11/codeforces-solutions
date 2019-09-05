s = input().split('+')
s = list(map(int,s))
s.sort()
s = [str(i) for i in s]
t = '+'
t = t.join(s)
print(t)
