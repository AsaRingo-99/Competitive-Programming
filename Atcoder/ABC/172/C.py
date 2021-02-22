a = list(map(int,input().split()))
b = list(map(int,input().split()))
c = list(map(int,input().split()))

N = a[0]
M = a[1]
K = a[2]

t = 0
i = 0
j = 0
count = 0
time = 0
TT = 0
while TT == 0 :
  if len(b) == 0 and len(c) == 0 :
    break
  if len(b) == 0 :
    time = time + c[0]
    if time > K :
      time = time - c[0]
      break
    count = count + 1
    c.remove(c[0])
  elif len(c) == 0 :
    if time > K :
      time = time - b[0]
      break
    time = time + b[0]
    b.remove(b[0])
    count = count + 1
  elif b[0] <= c[0] :
    time = time + b[0] 
    if time > K :
      time = time - b[0]
      break
    b.remove(b[0])
    count = count + 1
  else :
    time = time + c[0]
    if time > K :
      time = time - c[0]
      break
    c.remove(c[0])
    count = count + 1
print(count)
