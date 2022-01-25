#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        stack<char> st;
        for(int i = 0; i < s.size(); i++) {
            if(tolower(s[i]) == 'a' || tolower(s[i]) == 'e' || tolower(s[i]) == 'i' || 
               tolower(s[i]) == 'o' || tolower(s[i]) == 'u') {
                st.push(s[i]);
            }
        }
        
        for(int i = 0; i < s.size(); i++) {
            if(tolower(s[i]) == 'a' || tolower(s[i]) == 'e' || tolower(s[i]) == 'i' || 
               tolower(s[i]) == 'o' || tolower(s[i]) == 'u') {
                s[i] = st.top();
                st.pop();
            }
        }
        
        return s;
    }
};