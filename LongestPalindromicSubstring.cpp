#include <bits/stdc++.h>
using namespace std;
    int expand(string s, int left, int right) {
        int L = left;
        int R = right;
        while(L >= 0 && R < s.length() && s[L] == s[R]) {
            L--;
            R++;
        }
        cout << "Right: " << R << " Left: " << L << endl;
        return R - L - 1;
    }
    
    string longestPalindrome(string s) {
        if(s.length() == 0) return "";
        
        int start = 0;
        int end = 0;
        
        for(int i = 0; i < s.length(); i++) {
            int len1 = expand(s, i, i);
            int len2 = expand(s, i, i + 1);
            int len = max(len1, len2);
            cout << i << " " << len1 << " " << len2 << endl;
            if(len > end - start) {
                start = i - (len-1)/2;
                end = i + len/2;
            }
        }
        
        string ans = "";
        for(int i = start; i <= end; i++) {
            ans += s[i];
        }
        cout << start << " " << end <<  endl;
        return ans;
        
    }

    //alternative
    //    string longestPalindrome(string s) {
    //     if(s.length() == 0) return "";
        
    //     int start = 0;
    //     int maxLen = INT_MIN;
        
    //     for(int i = 0; i < s.length(); i++) {
    //         int len1 = expand(s, i, i);
    //         int len2 = expand(s, i, i + 1);
    //         int len = max(len1, len2);
            
    //         if(len > maxLen) {
    //             start = i - (len-1)/2;
    //             maxLen = len;
    //         }
    //     }
        
    //    return s.substr(start, maxLen); 
         
    // }
int main() {
    cout << longestPalindrome("babad");
    return 0;
}