a = list(map(str,input().split()))
b = list(map(str,input().split()))
count = 0
for i in range(0,a) :
  if a[i] != b[i] :
    count = count + 1

print(count)
