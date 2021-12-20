#include <bits/stdc++.h>
using namespace std;

// void rotate(vector<int>& nums, int k) {
//     int temp = 0;
//     int simpan = 0;
//     for(int i = 0; i < k; i++) {
//         temp = 0;
//         for(int i = 0; i < nums.size(); i++) {
//             if(i == 0) {
//                 temp = nums[0];
//                 simpan = nums[nums.size() - 2];
//                 nums[0] = nums[nums.size() - 1];
//             } else if(i == nums.size() - 1) {
//                 nums[i] = simpan;
//             }
//             else {
//                 nums[i] = temp;
//                 temp = nums[i + 1];
//                 // temp = nums[i + 1];
//             }
//         }
//     }
// }

void reverse(vector<int>& nums, int start, int end) {
    while(start < end) {
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }
}

void rotate(vector<int>& nums, int k) {
    // k = k % nums.size();

    for(int i = 0; i < k; i++)
    reverse(nums, 0, nums.size() - 1);
    reverse(nums, 0, k - 1);
    reverse(nums, k, nums.size() - 1);
}

int main() {

    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    rotate(nums, k);
    for(int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}