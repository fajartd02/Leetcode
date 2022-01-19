#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> temp;
        for(int i = 0; i < nums.size(); i++) {
            for(int j = i + 1; j < nums.size(); j++) {
                for(int k = j + 1; k < nums.size(); k++) {
                    if(nums[i] + nums[j] + nums[k] == 0) {
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[k]);
                        sort(temp.begin(), temp.end());
                        int v = 1;
                        for(int ii = 0;  ii< res.size(); ii++) {
                            if(res[ii] == temp) {
                                v = 0;
                            }
                        }
                        if(v==1) res.push_back(temp);
                        temp.clear();
                    }
                }
            }
        }
        
        return res;
    }
};


int main() {

    return 0;
}