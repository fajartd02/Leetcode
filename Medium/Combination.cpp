#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;


    void helper(int idx, int k,vector<int>&current,int n)
    {
        if(current.size()==k)// base case
        {
            for(int i =0; i < current.size(); i++) {
                cout << current[i] << " ";
            }
            cout << endl;
            return;
        }
        
        for(int i=idx;i<n+1;i++)
        {
            current.push_back(i);  //consider the current element i
            helper(i+1,k,current,n); // generate combinations
            current.pop_back(); //proceed to next element
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<int>current;
        helper(1,k,current,n);
        return ans; //return answer
    }

int main() {

    vector<vector<int>> tes = combine(4, 3);

}