#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    stack<char> st;
    string temp = "";
    for(int i = 0; i < s.size(); i++) {
        if(iswalnum(s[i])) {
            temp += tolower(s[i]);
            st.push(tolower(s[i]));
        }
    }
    
    for(int i = 0; i < temp.size(); i++) {
        if(temp[i] != st.top()) break;
        else st.pop();
    }

    if(!st.empty()) return false;
    else return true;
}

int main() {
    string s = "A man, a plan, a canal: Panama";
    cout << isPalindrome(s);
    // char ch = tolower('A');
    // cout << ch;

}