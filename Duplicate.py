number = int(input())
ans=0
for i in number:
    ans=ans^number
for j in range(1,len(number)):
    ans=ans^number[j]


print(ans)