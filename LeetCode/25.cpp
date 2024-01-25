
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
    ListNode *reverseKGroup(ListNode *head, int k)
    {




    }

    ListNode *reverseList(ListNode *head , int k )
    {
        ListNode *prev;
        ListNode *cur;
        ListNode *forward;

        forward = head->next;
        cur = forward;
        forward = forward->next;
        prev = head;
        prev->next = NULL;

        while ((k--))
        {
           cur->next = prev ;
           cur = forward;
           forward = forward->next; 
        }


        
    };
};
