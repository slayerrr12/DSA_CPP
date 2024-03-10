#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <iterator>
#include <algorithm>
#include <functional>
#include <utility>
#include <memory>
#include <tuple>
#include <numeric>


#include <bits/stdc++.h>

using namespace std;





class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {

         map<int,vector<int>> map;
         vector<vector<int>> ans;

         for (int  i = 0; i < groupSizes.size(); i++)
         {
                map[groupSizes[i]].push_back(i);

                if (map[groupSizes[i]].size()==groupSizes[i])
                {
                    ans.push_back(map[groupSizes[i]]);
                    map[groupSizes[i]].clear();

                }
                
         }
         
         return ans;
        
    }
};




int main()
{

return 0;
}

