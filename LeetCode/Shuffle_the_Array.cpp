#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;


class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        n = nums.size();
        vector<int> result;


        for (int i = 0; i < n/2; i++)
        {
            result.push_back(nums[i]);
            result.push_back(nums[i+n/2]);
            
        }

        return result;
        
         
         
 
        
    }
};
