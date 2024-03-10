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

class Solution
{
public:
    int xorOperation(int n, int start)
    {

        vector<int> nums;
        for (int i = 0; i < n; i++)
        {
            nums.push_back(start + 2 * i);
        }
        int b = 0;
        for(int a :nums){

            a = a^b;
            b = a;

            

        }

        return b;

    }
};

int main()
{

    return 0;
}