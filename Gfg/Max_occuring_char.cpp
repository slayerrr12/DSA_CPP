//{ Driver Code Starts
#include<bits/stdc++.h>
#include<map>


using namespace std;


// } Driver Code Ends


class Solution
{



    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        map<char, int> mymap;

        for (char c : str) {
            mymap[c]++;
        }

        char maxChar = '\0';
        int maxCount = 0;

        for (const auto& pair : mymap) {
            if (pair.second > maxCount) {
                maxCount = pair.second;
                maxChar = pair.first;
            }
        }

        return maxChar;



    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends