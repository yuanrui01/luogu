#include<iostream>

using namespace std;

int main() {

    int n;
    int ans = 1;
    int t = 1;
    cin >> n;
    int pre;
    cin >> pre;
    for(int i = 1; i < n; ++i) {
        int cur;
        cin >> cur;
        if (cur == pre + 1)
            t++;
        else
            t = 1;
        if (t > ans)
            ans = t;
        pre = cur;
    }

    cout << ans << endl;
    return 0;
}