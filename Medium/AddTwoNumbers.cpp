#include <bits/stdc++.h>
using namespace std;


//  Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };


// Belom Selesai
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int num1 = 0;
        int kali = 1;
        int num2 = 0;
        
        ListNode* curr = l1;
        while(curr!= NULL) {
            num1 += (kali * curr->val);
            kali *= 10;
            curr = curr->next;
        }
        
        curr = l2;
        kali = 1;
        while(curr != NULL) {
            num2 += (kali * curr->val);
            kali *= 10;
            curr = curr->next;
        }
        
        ListNode newNode(0);
        curr = &newNode;
        int total = num1 + num2;
        if(total == 0) {
            curr->next = new ListNode(0);
            return newNode.next;
        }
        
        while(total > 0) {
            curr->next= new ListNode(total % 10);
            total /= 10;
            curr = curr->next;
        }
        
        
        return newNode.next;
    }
};