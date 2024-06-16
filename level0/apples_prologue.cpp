#include<iostream>
#include<cmath>
using namespace std;


// P5709 【深基2.习6】Apples Prologue / 苹果和虫子
int main() {
    int m, t, s;
    cin >> m >> t >> s;
    if (t == 0) {
        cout << 0 << endl;
    } else {
        int consume = ceil(1.0*s/t);
        cout << (consume >= m ? 0 : m - consume) << endl;
    }
    return 0;
}