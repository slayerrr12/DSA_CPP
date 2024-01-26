
#include <bits/stdc++.h>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    ListNode *deleteMiddle(ListNode *head)
    {

        ListNode *fast = head;
        ListNode *slow = head;

        ListNode *prev = head;
        ListNode 

        int count = 0;

        while (fast != NULL || fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
            count++;
        }
        while (count--)
        {
            prev = prev->next;
        }

        







    }
};