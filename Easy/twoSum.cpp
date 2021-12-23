#include <bits/stdc++.h>
using namespace std;

// O(n)
vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int> mp;
        int complement;
        vector<int> angka;
        for(int i = 0; i < nums.size(); i++) {
            complement = target - nums[i];

            if(mp.find(complement) != mp.end()) {
                angka.push_back(i);
                angka.push_back(mp[complement]);
                break;
            } 

            mp[nums[i]] = i;
        }

        return angka;
    }

int main() {

    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = twoSum(nums, target);
    for(auto itr = ans.begin(); itr != ans.end(); itr++) {
        cout << *itr << "\n";
    }

    return 0;
}