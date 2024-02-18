s = [0 for _ in range(5)]
s[0] = 1
x = [6,3,5,4,10]
for i in range(1,len(x)):
    s[i] = 1
    if x[i-1]<=x[i]:
        s[i] = s[i] + s[i-1]
print(s)