

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {

        int i = 0;
        int j = s.size() - 1;
        for (char &c : s)
        {
            c = tolower(c);
        }

        for (int i = 0; i < j / 2; i++)
        {
            if (!(s[i] == s[j]))
            {
                return false;
            }
        }

        return true;
    }
};