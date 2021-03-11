strs=input()
"""strs=[char for char in strs]
l=[]
print(strs)
for i in strs:
    temp_list=[char for char in i]
    l.append(temp_list)
print(l)
print(temp_list)"""
if len(strs)==0:
    print("empy")
mlen=len(strs[0])
for i in range( len(strs)):
    mlen = min(len(strs[i]),mlen)
lcp=""
i=0
while i<mlen:
    char=strs[0][i]
    for j in range(1,len(strs)):
        if strs[j][i]!=char:
            print(lcp)
    lcp=lcp+char
    i+=1
print(lcp)
