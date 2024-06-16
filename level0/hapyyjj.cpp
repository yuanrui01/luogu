#include<iostream>

using namespace std;

int main() {
    int ans = 0;
    int max = -1;
    int day = 1;
    int s, e;
    while (day <= 7) {
        cin >> s >> e;
        int t = s + e;
        if (t > 8 && t > max) {
            ans = day;
            max = t;
        }
        day++;
    }
    cout << ans << endl;
    return 0;
}