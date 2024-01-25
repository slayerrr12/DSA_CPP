class Solution
{
public:
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        if (head == NULL)
        {
            return NULL;
        }

        ListNode *next = NULL;
        ListNode *curr = head;
        ListNode *prev = NULL;
        int count = 0;

        // Count the number of nodes remaining
        ListNode *temp = head;
        int remainingNodes = 0;
        while (temp != NULL)
        {
            remainingNodes++;
            temp = temp->next;
        }

        // Check if there are enough nodes to reverse in groups of k
        if (remainingNodes < k)
        {
            return head;
        }

        // Reverse k nodes
        while (curr != NULL && count < k)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }

        // Recursive call for the next group
        if (next != NULL)
        {
            head->next = reverseKGroup(next, k);
        }

        return prev;
    }
};
