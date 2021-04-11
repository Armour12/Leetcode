class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i;

        if (nums.size() == 1)
            return;

        for (i = nums.size() - 1; i > 0; i--)
        {
            if (nums[i] > nums[i - 1])
                break;
            else
                continue;
        }

        if (i == 0)
        {
            reverse(nums.begin(), nums.end());
        }
        else
        {
            if (nums[i - 1] < nums[nums.size() - 1])
            {
                swap(nums[i - 1], nums[nums.size() - 1]);
                reverse(nums.begin() + i, nums.end());
            }
            else
            {
                int temp = nums.size() - 1;
                while (nums[i - 1] >= nums[temp])
                {
                    --temp;
                }
                swap(nums[i - 1], nums[temp]);
                reverse(nums.begin() + i, nums.end());
            }

        }

    }
};