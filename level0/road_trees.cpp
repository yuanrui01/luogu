#include<iostream>

using namespace std;

int main() {
    int n, row;
    cin >> n >> row;
    int arr[n + 1];
    for (int i = 0; i <= n; ++i) {
        arr[i] = 1;
    }

    for(int i = 0; i < row; ++i) {
        int l,r;
        cin >> l >> r;
        for(int j = l; j <= r; ++j) {
            arr[j] = 0;
        }
    }

    int ans = 0;
    for(int i = 0; i <= n; ++i) {
        if (arr[i] == 1)
            ans++;
    }
    cout << ans << endl;
    return 0;
}