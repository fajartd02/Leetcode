#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return false;
        
        int lenS1 = s1.size();
        int lenS2 = s2.size();
        
        vector<int> v1(26, 0);
        vector<int> v2(26, 0);
        
        for(int i = 0; i < lenS1; i++) {
            v1[s1[i] - 'a'] += 1;
            v2[s2[i] - 'a'] += 1;
        }
        
        if(v1 == v2) return true;
        
        int left = 0;
        int right = s1.size();
        while(right < lenS2) {
            v2[s2[right] - 'a']++;
            v2[s2[left] - 'a']--;
            
            if(v1==v2) return true;
            
            left++;
            right++;
            
        }
        
        return false;
        
        
    }
};

int main() {
    // vector<int> v1 = {1, 2, 3};
    // vector<int> v2 = {1, 3, 2};

    // bool valid = v1==v2;
    // cout << valid;   
    return 0;
}