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
    vector<int> findWordsContaining(vector<string> &words, char x)
    {
        vector<int> a;
        int i = 0;
        for (auto s : words)
        {

            for (int i = 0; i < s.length(); i++)
            {
                if (x == s[i])
                {

                    a.push_back(i);
                    break;
                }
            }
            i++;
        }
    }
};

int main()
{

    return 0;
}