#include<iostream>
#include<string>

using namespace std;

typedef struct {
    int inc;
    string name;
} Toy;

int main(void) {

    int n,m;
    cin >> n >> m;
    Toy toys[n];

    for (int i = 0; i < n; ++i) {
        cin >> toys[i].inc >> toys[i].name;
        if (toys[i].inc == 0)
            toys[i].inc = -1;
        else 
            toys[i].inc = 1;
    }

    string ans = "";
    int a, s;
    int idx = 0;
    for (int i = 0; i < m; ++i) {
        cin >> a >> s;
        Toy cur = toys[idx];
        idx = (idx + n + cur.inc * s * (a == 0 ? 1 : -1)) % n;
        ans = toys[idx].name;
    }
    cout << ans << endl;
    return 0;
}