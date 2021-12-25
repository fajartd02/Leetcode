#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> st;
        int maxi = 0;
        int pointerA = 0;
        int pointerB = 0;
        
        while(pointerB < s.size()) {
           if(st.find(s[pointerB]) != st.end()) {
               st.erase(s[pointerA]);
               pointerA++;
           } else {
               st.insert(s[pointerB]);
               pointerB++;
               if(st.size() > maxi) maxi = st.size();
           }
        }
        
        return maxi;
    }
};


int main() {
    set<char> st;
    st.insert('D');
    // auto td = st.find('D');
    bool valid = st.find('x') != st.end();

    cout << valid << endl;
    return 0;
}