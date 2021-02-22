import numpy as np

n = int(input())
A = list(map(int,input().split()))
A = np.array(A)
tmp = 0
for i in range(0,n) :
  res = 1000008
  for j in range(i,n) :
    res = min(res,A[j])
    tmp = max(tmp,(j-i+1)*res)
print(tmp)