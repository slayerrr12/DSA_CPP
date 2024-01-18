#include <bits/stdc++.h>
#include <vector>

using namespace std;
class Solution
{
public:
    vector<int> merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {

        vector<int> ans;
        int i = 0;
        int j = 0;

        while (((n--) && (m--)))
        {
            if (nums1[i] >= nums2[j])
            {
                ans.push_back(nums1[j]);
                j++;

                continue;
            }

            if (nums1[i] <= nums2[j])
            {
                ans.push_back(nums1[i]);
                i++;
                continue;
            }
        }

        if (n--)
        {
            ans.push_back(nums1[i]);
            i++;
        }

        if (m--)
        {
            ans.push_back(nums1[j]);
            j++;
        }

        return ans;
    }
};

int main()
{

    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;
    vector<int> nums2 = {2, 5, 6};
    int n = 3;

    ans  = 

    return 0;
}