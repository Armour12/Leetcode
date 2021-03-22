class Solution {
    public int removeElement(int[] nums, int val) {
        int j;
        j=0;
        for ( int i: nums){
            if(i!=val){
                nums[j++]=i;
    
            }
        }
        return j;
    }
}