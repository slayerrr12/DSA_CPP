

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {

        int a = 0;
        int b = s.size() - 1;

        if (s.size()==1)
        {
            return true;
        }
        
        
        


        for (char &c : s)
        {
            if (!isalnum(c))
            {
                c = ' ';
            }
             if (c == ' ')
            {
                continue;
            }

            c = tolower(c);
        }

        while (a <= b)
        {
            if (!isalnum(s[a]))
            {
                a++;
                continue;
            }

            if (!isalnum(s[b]))
            {
                b--;
                continue;
            }

            if ((s[a] != s[b]))
            {

                return false;
                        }
            a++;
            b--;
        }

        return true;
    }
};