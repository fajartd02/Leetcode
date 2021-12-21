#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        unordered_map<int, int> mp;
        vector<int> angka;
        for(int i = 0; i < numbers.size(); i++) {
            int complement = target - numbers[i];
            
            if(mp.find(complement) != mp.end()) {
                angka.push_back(i + 1);
                angka.push_back(mp[complement] + 1);
                break;
            }
            
            mp[numbers[i]] = i;
        }
        sort(angka.begin(), angka.end());
        return angka;
    }
};

int main() {

    return 0;
}