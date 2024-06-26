#include<iostream>

using namespace std;

int main() {
    int l;
    cin >> l;

    int sum = 0;
    int cnt = 0;

    for (int i = 2; i < 100001; ++i) {
        bool is_prime = true;
        int j = 2;
        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            if (sum + i > l)
                break;
            else {
                cout << i << endl;
                sum += i;
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}