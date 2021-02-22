import numpy as np

a = int(input())
b = list(map(int,input().split()))
b.sort(reverse=True)
c = np.array(b)
print(c)
ans = 1
for i in range(0,len(b)) :
    if 0 in b :
        ans = 0
        break
    ans = ans * c[i]
    if ans > 10**18 :
        print(-1)
        break

if ans <= 10**18 :
    print(ans)

'''
a = list(map(float,input().split()))
print(int(a[0]*a[1]))
'''