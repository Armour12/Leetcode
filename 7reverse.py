class Solution:
    def reverse(self, x: int) -> int:
        r=0
        flag=0
        if(x<0):
            flag=1
            x=-x
        while(x>0):
            i=x%10
            r=r*10 +i
            x=x//10
        if flag==1:
            if abs(r)>0x7fffffff:
                return 0
            return -r
        if abs(r)>0x7fffffff:
            return 0
        return r