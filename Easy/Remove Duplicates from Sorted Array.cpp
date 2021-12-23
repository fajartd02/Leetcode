#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        for(int i = 0; i < nums.size(); i++) {
            s.insert(nums[i]);
        }
        nums.erase(nums.begin(), nums.end());
        
        for(auto x = s.begin(); x != s.end(); x++) {
            nums.push_back(*x);
        }
        
        return s.size();
    }
};

int main() {

    return 0;
}