#include<iostream>
#include<string>

using namespace std;


bool strCmp(string a, string b) {
    if (a.length() != b.length()) return a.length() > b.length();
    return a > b;
}

//  P1781 宇宙总统
int main() {
    int n;
    cin >> n;

    int index = 0;
    string ans = "0";
    string ts;
    for (int i = 0; i < n; ++i) {
        cin >> ts;
        if (strCmp(ts, ans)) {
            ans = ts;
            index = i + 1;
        }
    }
    cout << index << endl;
    cout << ans << endl;
    return 0;
}