
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
    bool hasCycle(ListNode *head)
    {
        ListNode *fast = head;
        ListNode *slow = head;

        while (fast != NULL && fast->next != NULL)

        {
            fast = fast->next->next;
            slow = slow->next;
            if (fast == slow)
            {
                ListNode *entry = head;
                int count = 0;
                while (entry != head)
                {
                    entry = entry->next;
                    slow = slow->next;
                    count++;
                }
                return count;
            }
            return false;
        }
    }
};