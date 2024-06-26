#include<iostream>

using namespace std;

int main() {
    int n, tmp, min = 1000000;
    cin >> n;
    while(n > 0) {
        cin >> tmp;
        if (min > tmp)
            min = tmp;
        n--;
    }
    cout << min << endl;
    return 0;
}