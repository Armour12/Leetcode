class Solution:
    def findDuplicate(self, nums: List[int]) -> int:    
        t=h=nums[0]
        t=nums[t]
        h=nums[nums[h]]
        while t!=h:
            t=nums[t]
            h=nums[nums[h]]
        t=nums[0]
        while t!=h:
            t=nums[t]
            h=nums[h]
        return t
    """
        c=0
        i=0
        for i in range(0,len(nums)):
            if(nums[i]==nums[i+1]):
                c=1
                i+=1
                return nums[i]
            i+=1
            if(c==1):
                break
            
        """