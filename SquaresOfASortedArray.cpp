#include <bits/stdc++.h>
using namespace std;

vector<int> sortedSquares(vector<int> &nums) {

    for(int i = 0; i < nums.size(); i++) {
        nums[i] = nums[i] * nums[i];
    }

    sort(nums.begin(), nums.end());
    return nums;
}

int main() {
    vector<int> nums = {-4,-1,0,3,10};
    vector<int> ans = sortedSquares(nums);
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}