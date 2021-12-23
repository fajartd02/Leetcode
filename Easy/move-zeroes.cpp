#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
//         approach 1 o(n+m)
//          ios_base::sync_with_stdio(0);
//           cin.tie(0); cout.tie(0);
        
//         int zero = 0;
//         for(int i = 0; i < nums.size(); i++) {
//             if(nums[i] == 0) {
//                 zero++;
//                 nums.erase(nums.begin() + i);
//                 i--;
//             }
//         }
        
//         for(int i = 0 ; i < zero; i++) {
//             nums.push_back(0);
//         }
        
        ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        for(int i = 0, index = 0; i < nums.size(); i++) {
            if(nums[i] != 0) {
                swap(nums[index++], nums[i]);
            }
        }
        
    }
};

int main(){

}