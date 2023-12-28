
#include<bits/stdc++.h>
#include<vector>
#include<unordered_map>
using namespace std;


class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        if(nums.size() == 1){
            return 0;
        }
        unordered_map<int,int> Frequency_count;
        int result = 0;
        for(int i =0 ; i<nums.size() ; i++){
            Frequency_count[nums[i]]++;
        }
        for (auto it = Frequency_count.begin(); it != Frequency_count.end(); ++it) {
         result += (it->second * (it->second - 1))/2;
    }
        return result;
        


    }
}; 