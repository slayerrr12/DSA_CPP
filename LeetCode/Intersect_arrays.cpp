#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <map>

using namespace std;

class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        sort(nums1.begin(), nums1.end()); // O(nlogn)
        sort(nums2.begin(), nums2.end()); // O(mlogm)
        vector<int> ans;
        int i = 0;
        int j = 0;
        if (nums1.size() == 0 || nums2.size() == 0)
        {
            return ans;
        }

        while (i < nums1.size() && j < nums2.size())
        {
            if (nums1[i] == nums2[j])
            {
                ans.push_back(nums1[i]);
                i++;
                j++;
                continue;
            }
            if (nums1[i] > nums2[j])
            {
                j++;
                continue;
            }
            if (nums1[i] < nums2[j])
            {
                i++;
                continue;
            }
        }

        return ans;
    }
};