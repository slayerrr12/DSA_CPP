// C++ program to find the maximum number of content children
class Solution
{
public:
    int findContentChildren(vector<int> &g, vector<int> &s)
    {
        // Sort the arrays in ascending order
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        // Initialize variables
        int greed = 0;       // Index for the child's greed factor array
        int satisfied = 0;   // Index for the cookie sizes array
        int ans = 0;         // Variable to store the maximum number of content children

        // Iterate through both arrays while there are still children and cookies to consider
        while (satisfied < s.size() && greed < g.size())
        {
            // Check if the current cookie size is sufficient for the current child's greed factor
            if (s[satisfied] >= g[greed])
            {
                ans++;          // Increment the count of satisfied children
                satisfied++;    // Move to the next cookie
                greed++;        // Move to the next child
            }
            else
            {
                satisfied++;    // Move to the next cookie if the current one is not enough for the child
            }
        }

        // Return the maximum number of content children
        return ans;
    }
};
