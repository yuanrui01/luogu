#include<iostream>

using namespace std;

// P3954 [NOIP2017 普及组] 成绩
int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int result = a * 2 / 10 + b * 3 / 10 + c * 5 / 10;
    cout << result << endl;
    return 0;
}