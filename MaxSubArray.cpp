#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> &nums) {
    int ans = INT_MIN;
    int temp = 0;
    for(int i = 0; i < nums.size(); i++) {
        //ans = 6
        // temp = 6 - 5 = 1
        temp = temp + nums[i]; // 1
        // 1 < -5
        if(temp < nums[i]) temp = nums[i];
        if(temp > ans) ans = temp; // 6
        // cout << ans << " ";
    }
    // cout << endl;
    return ans;

}

int main() {
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout << maxSubArray(nums);

}