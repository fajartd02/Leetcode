#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int pivot = 0;
        while (left <= right) {
            pivot = (left+right)/2;
            if(nums[pivot] < target) {
                left = pivot + 1;
            } else if(nums[pivot] > target) {
                right = pivot - 1;
            } else if(nums[pivot] == target) {
                return pivot;
            }
        }
        return left;
    }
};

int main() {

    return 0;
}
