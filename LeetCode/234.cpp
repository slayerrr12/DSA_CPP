/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *reverseLinkedList(ListNode *current, ListNode *prev = nullptr)
    {
        if (current == nullptr)
        {
            // Reached the end of the original list, return the new head
            return prev;
        }

        ListNode *nextNode = current->next;
        current->next = prev;

        // Recursive call for the rest of the list
        return reverseLinkedList(nextNode, current);
    }
    int calculateLength(ListNode *head)
    {
        int length = 0;

        while (head != nullptr)
        {
            length++;
            head = head->next;
        }

        return length;
    }
    bool isPalindrome(ListNode *head)
    {
        if (head == nullptr || head->next == nullptr)
        {
            return true;
        }

        ListNode *fast = head;
        ListNode *slow = head;

        int count = this->calculateLength(head);

        // Move 'fast' to the middle of the list
        while (fast != nullptr && fast->next != nullptr)
        {
            fast = fast->next->next;
            slow = slow->next;
            count++;
        }

        // Reverse the second half of the linked list
        slow = reverseLinkedList(slow);

        // Compare the reversed second half with the first half
        while (slow != nullptr && head != nullptr)
        {
            if (slow->val != head->val)
            {
                return false;
            }
            slow = slow->next;
            head = head->next;
        }

        return true;
    }
};