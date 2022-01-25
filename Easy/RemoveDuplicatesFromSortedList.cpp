#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *curr = head;
        
        while(curr) {
            while(curr->next != NULL && curr->val == curr->next->val) {
                curr->next = curr->next->next;
            }            
            curr = curr->next;
        }
        
        return head;
        
    }
};