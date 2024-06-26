#include<iostream>

using namespace std;

int main() {
    int arr[201];
    int i = 0;
    int n;
    cin >> n;
    while (n != 1) {
        arr[i] = n;
        i++;
        if (n % 2 == 0)
            n /= 2;
        else
            n = n * 3 + 1;
    }
    cout << 1 << " ";
    while (i > 0) {
        cout << arr[i - 1] << " ";
        i--;
    }
    cout << endl;
    return 0;
}