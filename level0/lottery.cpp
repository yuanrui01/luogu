#include<iostream>
#define N 7
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans[N + 1];
    int target[N];
    for (int i = 0; i < N; ++i) {
        cin >> target[i];
        ans[i] = 0;
    }
    ans[N] = 0;

    int tmp[N];
    for (int i = 0; i < n; ++i) {
        int match_count = 0;
        for (int j = 0; j < N; ++j) {
            cin >> tmp[j];
        }

        // 比较tmp和target有多少匹配的
        for(int j = 0; j < N; ++j) {
            int cNum = tmp[j];
            for(int k = 0; k < N; ++k) {
                if (cNum == target[k]) {
                    match_count++;
                    break;
                }
            }
        }
        ans[match_count]++;
    }
    for(int i = N; i > 0; --i) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}