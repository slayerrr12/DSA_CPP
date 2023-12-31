class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int ans = 0;
        if (nums[nums.size() - 1] != nums.size())
        {
            return nums.size();
        }
        if (nums[0] != 0)
        {
            return 0;
        }
        for (int i; i < nums.size(); i++)
        {

            if (nums[i] != i)
            {
                ans = i;
                return i;
            }
        }
        return ans;
    }
};