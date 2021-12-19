#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
    if(x < 10 && x >= 0) return true;
    if(x < 0) return false;

    int reverse = 0;
    int nilai = x;
    while(x > 0) {
        reverse = reverse + x % 10;
        x /=10;
        if(x < 0) break;
        reverse *= 10;
    }
    reverse /= 10;
    cout << reverse << endl;

    if(nilai == reverse) return true;

    return false;
}

int main() {

    int n;
    cin >> n;
    // isPalindrome(n);
    cout << isPalindrome(n);

    return 0;
}