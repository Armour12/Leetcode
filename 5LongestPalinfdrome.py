s=input()
ans=""
def hep(l,r):
    while (l>=0 and r <len(s) and s[l]==s[r]):
        r+=1
        l-=1
    return s[l+1:r]
for i in range(len(s)):
    t=hep(i,i)
    if len(t)>len(ans):
        ans=t
    t=hep(i,i+1)
    if len(t)>len(ans):
        ans=t
print(ans)