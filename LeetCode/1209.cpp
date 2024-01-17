#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void pop(stack<char> &myStack, string &s, int &j, int k)

    {

        int count = 1;

        bool flag = true;

        while (count < k)
        {
            if (s[j] == s[j + 1])
            {
                count++;
                j++;
                myStack.push(s[j]);
            }
            else
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            while (count--)
            {
                myStack.pop();
            }
        }

        return;
    }

    void push(stack<char> &myStack, string &s, int &j)
    {

        myStack.push(s[j]);
        j++;

        return;
    }

    string removeDuplicates(string s, int k)
    {
        stack<char> a;

        int j = 0;

        while (j < s.length())
        {
            if (!a.empty() && s[j] == a.top())
            {
                pop(a,s,j,k);
                continue;
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