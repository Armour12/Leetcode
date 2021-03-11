lst1 = [int(item) for item in input().split()] 
n=int(input())
ans=[]
g=[]
p=0
q=0
for i in lst1:
    
    for j in lst1:
        if i+j==n:
            ans.append(p)
            ans.append(q)
            
            
        q+=1
    p+=1
    q=0
ans = list(set(ans)) 
print(ans)