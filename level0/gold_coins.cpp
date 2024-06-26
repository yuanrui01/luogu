#include<iostream>

using namespace std;

int main() {
    int k;
    cin >> k;

    int sum = 0;
    int day_count = 0;
    int day_coins = 1;
    while (true) {
        for (int i = 0; i < day_coins && day_count < k; ++i, day_count++) {
            sum += day_coins;
        }    
        if (day_count == k)
            break;
        day_coins++;
    }
    cout << sum << endl;
    return 0;
}