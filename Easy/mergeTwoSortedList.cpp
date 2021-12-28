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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* hasil = new ListNode(-1, nullptr);
        // ListNode hasil(INT_MIN);
        ListNode* newNode = hasil;
        
        while(list1 != NULL && list2 != NULL) {
            if(list1->val < list2->val) {
                newNode->next = list1;
                list1 = list1->next;
            } else {
                newNode->next = list2;
                list2 = list2->next;
            }
            newNode = newNode->next;
        }
        
        if(list1 != NULL) newNode->next = list1;
        else if(list2 != NULL) newNode->next = list2;
        
        return hasil->next;
        //if using ListNode hasil(INT_MIN)
        // return hasil.next;
        
    }
};

int main() {

    return 0;
}