class Solution {
    public int[][] merge(int[][] intervals) {
        if(intervals.length<=1)
        {
            return intervals;
        }
        Arrays.sort(intervals,(arr1,arr2)-> Integer.compare(arr1[0],arr2[0]));
        List<int[]> output_arr =new ArrayList();
        int[] c_interval = intervals[0];
        output_arr.add(c_interval);
        for(int[] interval:intervals)
        {
            int c_begin = c_interval[0];
            int c_end= c_interval[1];
            int n_begin = interval[0];
            int n_end=interval[1];
            if(c_end>=n_begin)
            {
                c_interval[1]=Math.max(c_end, n_end);
            }
            else
            {
                c_interval=interval;
                output_arr.add(c_interval);
            }
        }
        
        
        
        return output_arr.toArray(new int[output_arr.size()][]);
    }
}