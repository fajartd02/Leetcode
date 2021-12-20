#include <bits/stdc++.h>
using namespace std;
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* reverseList(ListNode* head) {
    stack<int> s;
    struct ListNode *curr = head;
    while(curr != NULL) {
        s.push(curr->val);
        curr = curr->next;
    }
    curr = head;
    while(!s.empty()) {
        curr->val = s.top();
        s.pop();
    }
}