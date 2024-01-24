

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
      ListNode *reverseList(ListNode *head)
      {
        ListNode * prev ;
        ListNode * cur ;
        ListNode * forward ;
        
        
        
        forward = head->next;
        cur = forward;
        forward = forward->next;
        prev = head;
        prev->next = NULL;

        while ((forward==NULL))
        {
            ListNode *temp = prev; 
            cur->next = prev;
            forward = forward->next;
            





        }
        
        





      }
  };

  int main()
  {
#ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
#endif

      return 0;
  }
