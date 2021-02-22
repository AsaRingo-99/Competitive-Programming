S = set(list(input()))
 
A = set(list('abcdefghijklmnopqrstuvwxyz'))
 
ans = list(A-S)
if len(ans) == 0:
    print('None')
else:
    ans.sort()
    print(ans[0])