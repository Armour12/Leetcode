cd={'0':0,'1':1,'2':2,'3':3,'4':4,'5':5,'6':6,'7':7,'8':8,'9':9}
dec_place={6:100000, 5:10000, 4:1000, 3:100, 2:10, 1:1}
def s2i(n):
    i=len(n)
    num=0
    for char in n:
        num+=(cd[char]*dec_place[i])
        i-=1
    return num
print(s2i('213213'))