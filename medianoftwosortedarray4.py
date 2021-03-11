class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        def vA(arr,i):
            if i==-1:
                return -1000000
            if i==len(arr):
                return 100000
            return arr[i]
        def getI(rS,aS,aL):
            mid = (len(aS)+len(aL))/2
            rL=mid - rS
            return (rS-1,rS,rL-1,rL)
            
        def getD(lS, rS, lL, rL, aS,aL):
            if vA(aS,lS)>vA(aL,rL):
                return -1
            elif vA(aL,lL)>vA(aS,rS):
                return 1
            else:
                return 0
        
        def getR(lS,rS,lL,rL,aS,aL):
            odd=(len(aS)+len(aL))%2
            if odd:
                return min(vA(aL,rL),vA(aS,rS))
            else:
                return (max(vA(aS,lS),vA(aL,lL))+min(vA(aS,rS),vA(aL,rL)))/2.0
            
        
        
        
        aS=nums1
        aL=nums2
        if len(nums1)>len(nums2):
            aS=nums2
            aL=nums1
        
        
        s=lS=rS=rL=lL=1
        
        
        l=0
        r=len(aS)
        while s!=0:
            m=(l +r)/2
            lS, rS, lL, rL = getI(m,aS,aL)
            s=getD(lS, rS, lL, rL, aS,aL)
            if s< 0:
                r=m-1
            elif s>0:
                l=m+1
        return getR(lS,rS,lL,rL,aS,aL)
                
        