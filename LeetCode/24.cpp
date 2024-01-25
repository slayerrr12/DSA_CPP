class Solution
{
public:
    ListNode *swapPairs(ListNode *head, )
    {
        if (head == NULL)
        {
            return NULL;
        }

        ListNode *next = NULL;
        ListNode *curr = head;
        ListNode *prev = NULL;
        int count = 0;

        

        // Reverse k nodes
        while (curr != NULL && count < 2)
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
            head->next = wapPairs(next, k);
        }

        return prev;
    }
};
