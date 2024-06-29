#include<iostream>
#include<vector>
using namespace std;

int main() {
    
    int n, m;
    cin >> n >> m;
    vector<vector<int>> ans(n, vector<int>(n, 0));
    int x1, x2, y1, y2;
    for (int i = 0; i < m; ++i) {
        cin >> x1 >> y1 >> x2 >> y2;
        for(int j = x1 - 1; j <= x2 - 1; ++j) {
            for (int k = y1 - 1; k <= y2 - 1; ++k) {
                ans[j][k]++;
            }
        }
    }

    for(int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << ans[i][j] << " ";
        } 
        cout << endl;
    }
    return 0;
}