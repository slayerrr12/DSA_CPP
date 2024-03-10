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
    bool match(char a, char b)
    {
        if (a == '(' && b == ')')
        {
            return true;
        }
        if (a == '{' && b == '}')
        {
            return true;
        }
        if (a == '[' && b == ']')
        {
            return true;
        }
        return false;
    }

    bool isValid(string s)
    {
        stack<char> myStack;
        if (s.length()==1)
        {
            return false;
        }
        

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                myStack.push(s[i]);
            }
            else
            {
                if (myStack.empty()&&s.length()==0)
                {
                    return false;
                }
                
                if (this->match(myStack.top(),s[i]))
                {
                      myStack.pop();
                }
                else
                {
                    myStack.push(s[i]);
                }
                
            }
            
        }
        if (myStack.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};

int main()
{

    return 0;
}