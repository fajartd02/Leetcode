#include <bits/stdc++.h>
using namespace std;

int main() {
	
	vector<int> nums = {0, 0, 1};
    // nums.erase(nums.begin(), nums.begin() + 2);
    
    int ans=0;
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] == 0){
          nums.erase(nums.begin() + i);
          ans++;
        } 
    }
    cout << ans << endl;

	for(int i = 0; i < nums.size(); i++) {
            cout << nums[i] << " ";
    }
    // cout << endl;
    // nums.push_back(4);
    // nums.push_back(10);
    // cout << nums[2] << endl;

}