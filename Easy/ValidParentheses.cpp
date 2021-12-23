#include <bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    stack <char> str;
    if(s.length() % 2 == 1) {
        return false;
    }

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '{' || s[i] == '[' || s[i] == '(') {
            str.push(s[i]);
        } else {
            if(str.empty()) return false;
            else if(s[i] == '}' && str.top() != '{') return false;
            else if(s[i] == ']' && str.top() != '[') return false;
            else if(s[i] == ')' && str.top() != '(') return false;
            else str.pop();
        }
    }

    if(str.empty()) return true;
    return false;
}

int main() {

    string s = "{{";
    cout << isValid(s);
}