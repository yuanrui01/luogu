#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    vector<int> a = {9,8,7,6,5,4,3,2,1};
    int sz = a.size();
    int h = 1;
    while (h < sz/3)
        h = 3*h + 1;
    while (h >= 1) {
        for (int i = h; i < sz; ++i) {
            for (int j = i; j >= h && a[j] < a[j - h]; j -= h) {
                swap(a[j], a[j - h]);
            }
        }
        h /= 3;
    }
    for (int num : a)
        cout << num << " ";
    cout << endl;
    return 0;
}