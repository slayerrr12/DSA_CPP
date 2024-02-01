#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

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

int main()
{
    // Create two linked lists
    ListNode *l1 = new ListNode(5);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);

    ListNode *l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);

    // Test the getnumber function
    vector<int> ans = getnumber(l1,l2)

    // Clean up the allocated memory
    while (l1 != nullptr)
    {
        ListNode *temp = l1;
        l1 = l1->next;
        delete temp;
    }

    while (l2 != nullptr)
    {
        ListNode *temp = l2;
        l2 = l2->next;
        delete temp;
    }

    return 0;
}
