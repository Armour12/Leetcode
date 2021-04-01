class Solution(object):
    def maxArea(self, height):
        s,i,j=0,0,len(height)-1
        while i<j:
            s=max(s,min(height[i],height[j])*(j-i))
            if(height[i] <height[j]):
                i+=1
            else:
                j-=1
        return s
        