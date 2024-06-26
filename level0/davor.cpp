#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int y = (n / 364);

    int k = 1;
    int x = y >= 100 ? 100 : y;
    while (x >= 1) {
        int r = y - x;
        if (r % 3 == 0 && r / 3 != 0) {
            k = r / 3;
            break;
        }
        --x;
    }
    cout << x << endl;
    cout << k << endl;
    return 0;
}