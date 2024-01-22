class Solution
{

public:
    void swap(char &a, char &b)
    {

        char temp = a;
        a = b;
        b = temp;
    }

    void reverseString(vector<char> &s)
    {
        int i = 0 ;
        int j = s.size()-1;
        reverse(s,i,j);
    }
    void reverse(vector<char> &arr, int i, int j)
    {
        if (i < j)
        {
            swap(arr[i], arr[j]);
            reverse(arr, i + 1, j - 1);
        }
        else
        {
            return;
        }
        return;
    }
};