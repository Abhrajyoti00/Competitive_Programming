for i in range(int(input())):
    n = int(input())
    g = 0
    if (n%2021 == 0) or (n%2020 == 0):
        g = 1
        print('Yes')
    else:
        y = n%2020
        x = (n-y)/2020 - y
        if (x>=0) and (2020*x + 2021*y):
            g = 1
            print('Yes')

    if g == 0:
        print('No')