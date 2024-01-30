#include <bits/stdc++.h>

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
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (head == NULL) {
            return head;
        }

        ListNode *i = head;
        ListNode *j = head->next;

        while (j != NULL)
        {
            if (i->val == j->val)
            {
                j = j->next;
                i->next = j;
            }
            else
            {
                i = i->next;
                j = j->next;
            }
        }
        return head;
    }
};

//time complexity is O(n)


int main()
{

    return 0;
}
