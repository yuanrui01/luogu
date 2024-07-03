#include<iostream>

using namespace std;
int a[1050][1050];

void cal(int x, int y, int n) {
    if (n == 0)
        a[x][y] = 1;
    else {
        cal(x + (1 << n - 1), y, n - 1);
        cal(x, y + (1 << n - 1), n - 1);
        cal(x + (1 << n - 1), y + (1 << n - 1), n - 1);
    }
}

int main() {
    int n;
    cin >> n;
    cal(0, 0, n);
    int m = 1 << n;
    for(int i = 0; i < m; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}