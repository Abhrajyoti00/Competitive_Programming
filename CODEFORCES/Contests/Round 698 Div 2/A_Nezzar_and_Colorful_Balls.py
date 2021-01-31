for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    # print(a)
    d = dict()
    for item in a: 
        if (item in d): 
            d[item] += 1
        else: 
            d[item] = 1
    ans = max(d.values())
    print(ans)
