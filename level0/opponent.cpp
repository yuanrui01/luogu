#include<iostream>
#include<cmath>
#define MAXN 1024

using namespace std;

int main() {
    int n, a[MAXN][3], ans = 0;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> a[i][0] >> a[i][1] >> a[i][2];
    }

    for(int i = 0; i < n - 1; ++i) {
        for(int j = i + 1; j < n; ++j) {
            if (abs(a[i][0] - a[j][0]) <= 5 
                && abs(a[i][1] - a[j][1]) <= 5 
                && abs(a[i][2] - a[j][2]) <= 5 
                && abs(a[i][0] + a[i][1] + a[i][2] - a[j][0] - a[j][1] - a[j][2]) <= 10)
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
