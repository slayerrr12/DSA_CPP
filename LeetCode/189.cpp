#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void swap(int &a, int &b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    void rotate(vector<int> &nums, int k)
    {
        if (nums.size() < k)

        {
            k = nums.size() - k % nums.size();
        }

        int j = nums.size();
        int i = j - k;
        int l = j - k;

        while (j >= l && i >= 0)
        {
            swap(nums[i], nums[j]);
            i--;
            j--;
        }
        for (auto i : nums)
        {
            cout << i << " ";
        }
    }
};

int main()
{

    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    Solution obj;
}