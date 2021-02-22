a = int(input())
ans = ""
 
while a > 0:
    b = (a-1) % 26
    ans = chr(b + 97) + ans
    a = (a-b-1) // 26
 
print(ans)