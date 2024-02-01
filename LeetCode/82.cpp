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
        ListNode *dummy = new ListNode(0,head);
        ListNode *prev= dummy;


        while (head != NULL) {
        // Check if the current node has a duplicate with the next node
        if (head->next != NULL && head->val == head->next->val) {
            // Move to the last node of the duplicate sequence
            while (head->next != NULL && head->val == head->next->val) {
                head = head->next;
            }

            // Skip the duplicate sequence by updating the 'next' pointer of the previous node
            prev->next = head->next;
        } else {
            // If no duplicate, move the 'prev' pointer to the current node
            prev = prev->next;
        }

        // Move to the next node in the original linked list
        head = head->next;
    }
    return dummy->next;


        

    }
};

// time complexity is O(n)

int main()
{

    return 0;
}
