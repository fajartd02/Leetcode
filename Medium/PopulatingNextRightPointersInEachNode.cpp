#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};

class Solution {
public:
    
    void dfs(Node* lf, Node* rg) {
        if(lf == NULL || rg == NULL) return;
        
        lf->next = rg;
        rg->next = NULL;
        
        dfs(lf->left, lf->right);
        dfs(lf->right, rg->left);
        dfs(rg->left, rg->right);
    }
    
    Node* connect(Node* root) {
        if(root == NULL) return root;
        
        root->next = NULL;
        dfs(root->left, root->right);
        return root;
    }
};
