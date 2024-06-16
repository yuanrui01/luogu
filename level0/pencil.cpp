#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main() {
    int n, n1, n2, n3, p, p1, p2, p3;

    cin >> n >> n1 >> p1 >> n2 >> p2 >> n3 >> p3;
    //1
    int ans = ceil(1.0 * n / n1) * p1;
    //2
    ans = max(ans, (int) ceil(1.0 * n / n2) * p2);

    //3
    ans = max(ans, (int) ceil(1.0 * n / n3) * p3);
    cout << ans << endl;
    return 0;
}