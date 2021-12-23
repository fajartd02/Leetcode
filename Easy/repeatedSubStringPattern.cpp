#include <bits/stdc++.h>
using namespace std;

bool repeatedSubstringPattern(string s) {
    if(s.size() %2 == 1) return false;
    int n = s.size();
    int len = n / 2;
    int i = 0;
    while(i + len < n && s[i] == s[i + len]) i++;

    if(i + len == n) return true;
    else return false;
}

int main() {
    string s = "ababab";
    cout << repeatedSubstringPattern(s);

}