#include <bits/stdc++.h>
using namespace std;

    int findLengthOfLCIS(vector<int> &nums) {
        
        if(nums.size() < 2) return nums.size();
        int ans = 1;
        int count = 1;
        for(int i = 1; i < nums.size(); i ++) {
            if(nums[i] > nums[i - 1]) count++;
            else {
                count = 1;
            }
            ans = max(ans, count);
            // cout << "Ans: " << ans << endl;
            // cout << "Count: " << count << endl;
        }
        return ans;
        
    }

int main() {
    vector<int> nums = {1,3,5,4,2,3,4,5};
    cout << findLengthOfLCIS(nums);
    
    return 0;
}
