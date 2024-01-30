#include <bits/stdc++.h>
#include <vector>

using namespace std;

class Solution
{
public:
    void solve(string output, vector<string> &ans, int index, string mapping[], string digits)
    {

        if (index > digits.length())
        {
            return;
        }

        string alphabets = mapping[index];

        for (int i = 0; i < alphabets.length(); i++)
        {
            output.push_back(alphabets[i]);
            cout << alphabets[i] << endl;
            solve(output, ans, index + 1, mapping, digits);
            output.pop_back();
        }
    }

    vector<string> letterCombinations(string digits)
    {

        vector<string> ans;
        int index = 0;
        string output;
        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        this->solve(output, ans, index, mapping, digits);
        return ans;
    }
};

int main()
{
}

// tiner complexity of this code is  O(c^d)
// d is the depth of recusion and c is the braanching factor'
/*

so here thee are 3 choices everytime hence the branching factor is 3
the depth is n that is thel enght of the string
hence the TIME COMPLEXITY : 3^np;A


*/
