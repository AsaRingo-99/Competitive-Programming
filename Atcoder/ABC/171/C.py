a = int(input())
p = 1
mod = ""
ans = a
def kai(i) :
    p = 0
    if i != 0 :
        for j in range(i,0,-1) :
            t = 26 ** j
            p = p + t
        return p
    else :
        return 1

for i in range(11,1,-1) :
    an = ans
    if ans // kai(i-1) == 0 :
        continue
    if ans % kai(i-1) == 0 :
        t = "z"
        k = i * t
        mod = mod + k
        break
    ans = ans // kai(i-1)
    amari = an % kai(i-1)
    mod = mod + chr(amari+96)

print(mod)
