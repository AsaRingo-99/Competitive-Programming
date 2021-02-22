a = int(input())
count = 0
ans = "No"
for i in range(a) :
  b = list(map(int,input().split()))
  if b[0] == b[1] :
    count = count + 1
  else :
    count = 0
  if count == 3 :
    ans = "Yes"

print(ans)