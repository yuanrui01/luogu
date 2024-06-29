#include<iostream>
#include<cstring>
#define N 22

using namespace std;

int main() {
    
    int ans[N][N][N];
    memset(ans, 0, sizeof(ans));

    int w, x, h;
    cin >> w >> x >> h;

    int q;
    cin >> q;

    int x1, y1, z1, x2, y2, z2;
    for (int l = 0; l < q; ++l) {
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
        for (int i = x1; i <= x2; ++i) {
            for (int j = y1; j <= y2; ++j) {
                for (int k = z1; k <= z2; ++k) {
                    ans[i][j][k] = 1;
                }
            }
        }
    }

    int a = w * x * h;
    for (int i = 1; i <= w; ++i) {
        for (int j = 1; j <= x; ++j) {
            for (int k = 1; k <= h; ++k) {
                a -= ans[i][j][k];
            }
        }
    }
    cout << a << endl;
    return 0;
}