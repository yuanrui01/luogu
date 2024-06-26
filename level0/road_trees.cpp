#include<iostream>
#include<cstring>

using namespace std;

int main() {
    int n, row;
    cin >> n >> row;
    int arr[n + 1];
    memset(arr, 0, sizeof(arr));

    for(int i = 0; i < row; ++i) {
        int l,r;
        cin >> l >> r;
        for(int j = l; j <= r; ++j) {
            arr[j] = 1;
        }
    }

    int ans = 0;
    for(int i = 0; i <= n; ++i) {
        if (arr[i] == 0)
            ans++;
    }
    cout << ans << endl;
    return 0;
}