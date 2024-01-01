#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <map>

using namespace std;

void sortOddAndEvens(vector<int> &nums)
{
    int n = nums.size();
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if ((nums[i] & 1) == 0 && (nums[j] & 1) == 0)
        {
            i++;
            continue;
        }
        if ((nums[i] & 1) != 0 && (nums[j] & 1) != 0)
        {
            j--;
            continue;
        }
        if ((nums[i] & 1) == 0 && (nums[j] & 1) != 0)
        {
            i++;
            j--;
            continue;
        }
        if ((nums[i] & 1) != 0 && (nums[j] & 1) == 0)
        {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;
            j--;
            continue;
        }
    }
}

void printVector(vector<int> &nums)
{
    for (auto i : nums)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{

    vector<int> nums = {0, 13, 0, 1, 0, 123441, 1, 1, 1, 0};
    sortOddAndEvens(nums);
    cout << "Sorted array is: " << endl;

    printVector(nums);

    return 0;
}