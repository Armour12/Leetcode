class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        sub = {}
        css=0
        cl=0
        l=0
        for i, letter in enumerate(s):
            if letter in sub and sub[letter]>=css:
                css= sub[letter]+1
                cl=i-sub[letter]
                sub[letter]=i
                
            else:
                sub[letter]=i
                cl+=1
                if cl>l:
                    l=cl
                    
        return l
                
                
                
                
                
                
        """ def splits(word):
            sa=" "
            return [char for char in word if char is not sa]
        
        st=splits(s)
        st=list(set(st))
        if len(st):
            return len(st)
        else:
            return 0
        """