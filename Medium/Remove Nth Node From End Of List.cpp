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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int size = 0;
        ListNode* curr = head;
        while(curr) {
            size++;
            curr = curr->next;
        }
        
        int iterate = size-n;
        if(iterate == 0) {
            return head->next;
        }
        
        curr = head;
        
        for(int i = 1; i<=iterate-1 && curr->next != NULL; i++) {
            curr = curr->next;
        }
        curr->next = curr->next->next;
        return head;
        
    }
};
int main(){

    printf("hello World!");
    return 0;
}