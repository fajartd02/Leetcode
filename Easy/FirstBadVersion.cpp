#include <bits/stdc++.h>
using namespace std;

bool isBadVersion(int pivot);

class Solution {
public:
    int firstBadVersion(int n) {
        long long pivot = 0;
        long long left = 0;
        long long right = n-1;
        while(left <= right) {
            pivot = (left + right) / 2;
            if(isBadVersion(pivot)) {
                if(isBadVersion(pivot - 1) == false) {
                    return pivot;
                } else {
                    right = pivot - 1;
                }
            } else {
                left = pivot + 1;
            }

        }
        return left;
    }
};


int main() {

    return 0;
}
