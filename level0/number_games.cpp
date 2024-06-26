#include<iostream>

using namespace std;

int main() {
    int arr[110];
    int n = 0;
    while (true) {
        int tmp;
        cin >> tmp;
        if (tmp == 0)
            break;
        arr[n++] = tmp;
    }

    while (n > 0) {
        cout << arr[n - 1] << " ";
        n--;
    }
    cout << endl;
    return 0;
}