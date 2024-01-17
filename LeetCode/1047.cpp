#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void pop(stack<char> &myStack, string &s, int &j)

    {

        if (!(myStack.empty()))
        {
            myStack.pop();
            j++;
            return;
        }

        return;
    }

    void push(stack<char> &myStack, string &s, int &j)
    {

        myStack.push(s[j]);
        j++;

        return;
    }

    string removeDuplicates(string s)
    {
        stack<char> a;

        int j = 0;

        while (j < s.length())
        {
            if (!a.empty() && s[j] == a.top())
            {
                a.pop();
            }
            else
            {
                a.push(s[j]);
            }
            j++;
        }

        string result;
        while (!a.empty())
        {
            result = a.top() + result;
            a.pop();
        }

        return result;
    }
};