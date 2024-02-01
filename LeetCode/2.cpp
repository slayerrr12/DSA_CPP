#include <bits/stdc++.h>
#include <vector>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    vector<int> getnumber(ListNode *l1, ListNode *l2)
    {
        int num1 = 0;
        int num2 = 0;
        int count = 0;

        while (l1 != nullptr)
        {
            num1 = pow(10, count) * l1->val + num1;
            l1 = l1->next;
            count++;
        }

        count = 0;
        while (l2 != nullptr)
        {
            num2 = pow(10, count) * l2->val + num2; // Corrected l1 to l2 here
            l2 = l2->next;
            count++;
        }

        vector<int> ans = {num1, num2};

        return ans; // Assuming you want to return an integer from this function
    }

    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {

        if (/* condition */)
        {
            /* code */
        }
        


        vector<int> ans = getnumber(l1, l2);

        long long res = ans[0] + ans[1];

        ListNode *l3 = nullptr;
        ListNode *head = l3;

        while (res != 0)
        {
            int currentDigit = res % 10;

            ListNode *temp = new ListNode(currentDigit);

            if (l3 == nullptr)
            {
                // If l3 is nullptr, set it to temp for the first node
                l3 = temp;
                head = l3; // Set head to the beginning of the list
            }
            else
            {
                // Otherwise, append temp to the end of the linked list
                l3->next = temp;
                l3 = l3->next;
            }

            res /= 10;
        }
        return head;
    }
};