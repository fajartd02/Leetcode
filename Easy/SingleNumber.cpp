#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> mp;
        int nilai;
        for(int i = 0 ; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        
        for(auto itr = mp.begin(); itr != mp.end(); itr++) {
            if(itr->second == 1){
              nilai = itr->first;
            }
            
        } 
        
        return nilai;
    }
};

int main() {

    return 0;
}