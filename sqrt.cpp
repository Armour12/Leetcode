class Solution
{
    long long int sqrt(int num)
    {
        int s = 0;
        int e = num;

        long long int res;

        long long int mid = s + (e - s) / 2;

        while (s <= e)
        {
            long long int sq_mid = mid * mid;
            if (sq_mid == num)
            {
                return mid;
            }
            if (sq_mid < num)
            {
                res = mid;
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
            mid = s + (e - s) / 2;
        }
        return res;
    }

public:
    int mySqrt(int x)
    {   
        return sqrt(x);
    }
};