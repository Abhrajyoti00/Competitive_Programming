for i in range(int(input())):
    fl = list(map(int, input().split()))
    q,d = fl[0],fl[1]
    a = list(map(int, input().split()))
    last_digits = dict()
    for i in range(1,11):
        last_digits[i] = ((d%10)*(i%10))%10
    # print(last_digits)
    # last_digits = {1:7,2:4,3:1,4:8,5:5,6:2,7:9,8:6,9:3,10:0}
    for num in a:
        # print('Num = ', num)
        g = 0
        if num>d*10:
            print('YES')
            g = 1
        else:
            if num%d==0:
                print("YES")
                g = 1
            else:
                #num = 43
                ld = num%10 #ld = 3
                low_divisor = num//d  #43//7 = 6
                for i in range(1,low_divisor+1):
                    # print('i = ', i)
                    # print(last_digits[i])
                    if last_digits[i] == ld:
                        print('YES')
                        g = 1
                        break
        if g == 0:
            print('NO')




