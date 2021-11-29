#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int pivot = 0, left = 0, right = nums.size() - 1;
        while(left <= right) {
            pivot = (left + right) / 2;
            if(nums[pivot] > target) {
                if(nums[pivot - 1] < target)
                    return pivot + 1;
                else
                    right = pivot - 1;
            } else if(nums[pivot] == target) {
                return pivot;
            }else if(nums[pivot] < target) {
                if(nums[pivot + 1] > target)
                    return pivot + 1;
                else left = pivot - 1;
            }
        }

        return 0;
    }
};


int main() {

    return 0;
}
