#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0;
        int v=0;
        for(int i = s.size() - 1; i >= 0; i--) {
            if(s[i] == ' ' && v==1) break;
            if(s[i] == ' ' && v==0) continue;
            
            v=1;
            ans++;
        }
        
        cout << ans << endl;
        return ans;
    }
};