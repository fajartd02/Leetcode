#include <bits/stdc++.h>
using namespace std;



int main() {
    set<char> st;
    st.insert('D');
    // auto td = st.find('D');
    bool valid = st.find('x') != st.end();

    cout << valid << endl;
    return 0;
}