#include<bits/stdc++.h>

using namespace std;

    string reverse_string(string s) {
        int i = 0;
        int j = s.size()-1;
        while(i < j) {
            swap(s[i], s[j]);
            i++;
            j--;
        }
        return s;
    }

    uint32_t reverseBits(uint32_t n) {
        uint32_t total = 0;
        string temp = to_string(n);
        string reverse = reverse_string(temp);
        cout << reverse << endl;
        uint32_t pangkat = reverse.size();
        pangkat -= 1;
        for(int i = 0; i < reverse.size(); i++) {
            if(reverse[i] == '0') {
                pangkat -= 1;
            } else {
                total  = total + pow(2, pangkat);
                pangkat -= 1;
            }
        }
        return total;
    }



int main() {

    uint32_t x = reverseBits(1000);
    // cout << reverse_string("fajar") << endl;
    cout << x << endl;
}