

class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
       ListNode *fast = head;
        ListNode *slow = head;

        while (fast != nullptr && fast->next != nullptr)
        {
            fast = fast->next->next;  // Move fast two steps
            slow = slow->next;        // Move slow one step
        }

        if (count & 1 == 0)
        {

            return slow;
        }
        else
        {
            return slow->next;
        }
    }
};
