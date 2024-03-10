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

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

class MinStack
{
public:
    int min;

    vector<pair<int, int>> s;
    int topIndex; // Renamed the member variable to topIndex

    MinStack()
    {
        topIndex = -1; // Initialize topIndex instead of top
        min = INT32_MAX;
    }

    void push(int val)
    {
        if (s.empty())
        {
            s.push_back({val, val});
        }
        else
        {
            s.push_back({val, min(s.back().second, val)});
        }
    }

    

    void pop()
    {
        s.pop_back();
    }

    int top() { return s.back().first; }

    int getMin() { return s.back().second; }
};
