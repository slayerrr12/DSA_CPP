#include <bits/stdc++.h>
#include <map>

using namespace std;

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {

        int ans ;

        map<int, int> MyMap;

        for (int i = 0; i < nums.size(); i++)
        {
            MyMap[nums[i]]++;
        }

        for (pair<int, double> MyPair : MyMap)
        {
            if (MyPair.second > 1)
            {
                ans =  MyPair.first;
            }
        }

        return ans;

};



int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    return 0;
}
