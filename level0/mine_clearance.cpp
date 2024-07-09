#include<iostream>
#include<vector>
using namespace std;


int main(void) {

    int n, m;
    cin >> n >> m;

    char a[n + 2][m + 2];
    for (int i = 0; i < n + 2; ++i) 
        for (int j = 0; j < m + 2; ++j)
            a[i][j] = '?';
    
    for (int i = 1; i <= n; ++i) 
        for (int j = 1; j <= m; ++j)
            cin >> a[i][j];
    
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (a[i][j] == '*') {
                cout << '*';
            } else  {
                int cnt = 0;
                for (int r = -1; r <= 1; ++r)
                    for (int c = -1; c <= 1; ++c)
                        if (a[i + r][j + c] == '*')
                            cnt++;
                cout << cnt;
            }
        }
        cout << endl;
     }       
}