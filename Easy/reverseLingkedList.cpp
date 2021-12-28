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
        stack<int> st;
        ListNode *curr = head;
        while (curr != NULL)
        {
            st.push(curr->val);
            curr = curr->next;
        }

        curr = head;
        while (curr != NULL)
        {
            curr->val = st.top();
            st.pop();
            curr = curr->next;
        }

        return head;
    }
};

int main()
{

    return 0;
}