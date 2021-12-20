#include <bits/stdc++.h>
using namespace std;


// Naive - Overflow
// string longestCommonPrefix(vector<string>& strs) {
//     string ans = "";
//     if(strs[0][0] != strs[1][0]) return ans;

//     int length = 0;
//     if(strs[0][0] > strs[1][0]) length = strs[1].size();
//     else length = strs[0].size();
    
//     for(int i = 0; i < length; i++) {
//         if(strs[0][i] == strs[1][i]) ans += strs[0][i];
//         else break;
//     }
    

//     for(int i = 2; i < strs.size(); i++) {
//         string temp = "";
//         for(int j = 0; j < length; j++) {
//             if(strs[i][j] == ans[j]) {
//                 temp += ans[j];
//             }
//             else {
//                 ans = temp;
//                 length = j + 1;
//                 break;
//             }
//         }
//     }

//     return ans;
// }


// O(m*n)
// string longestCommonPrefix(vector<string>& strs) {
//     if(strs.size() == 0) return "";
//     string prefix = strs[0];

//     for(int i = 1; i < strs.size(); i++)  {
//         while(strs[i].find(prefix) != 0) {
//             prefix = prefix.substr(0, prefix.size() - 1);
//         }
//     }

//     return prefix;
// }

// loop
// O(m*n + n)
string longestCommonPrefix(vector<string>& strs) {
    int len = INT_MAX;
    string ans = "";
    for(int i = 0; i < strs.size(); i++) {
        if(len > strs[i].length()) {
            len = strs[i].length();
            ans = strs[i];
        }
    }
    int count = 0;
    for(int i = 0; i < len; i++) {
        for(int j = 0; j < strs.size(); j++) {
            if(strs[j][i] != ans[i]) {
                return ans.substr(0, count);
            }
        }
        count ++;
    }
    return ans.substr(0, count);
}



int main() {


    vector<string> strs = {"flower", "flow", "flight"};
    // cout << strs.size();
    string ans = longestCommonPrefix(strs);
    cout << ans << endl;
    return 0;
}
