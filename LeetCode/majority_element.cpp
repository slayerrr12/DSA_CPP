#include <bits/stdc++.h>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> Frequency_count;

        for (int i = 0; i < nums.size(); i++)
        {
            Frequency_count[nums[i]]++;
        }
        for (auto &pair : Frequency_count)
        {
            if (pair.second >= nums.size() / 2)
            {
                return pair.first;
            }
        }
    }
};