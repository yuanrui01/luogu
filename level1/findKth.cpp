#include<iostream>
#include<cstdio>
using namespace std;

int ans = 0;
int n,k;

// P1923	【深基9.例4】求第 k 小的数
void findkth(int a[], int l, int r) {
    if (l == r) {
        ans = a[l];
        return;
    }
    int i = l, j = r, flag = a[(l + r) / 2], tmp;
    do {
        while (a[i] < flag) i++;
        while (a[j] > flag) j--;
        if (i <= j) {
            tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
            i++;
            j--;
        }
    } while (i <= j);
    
    if (k <= j) findkth(a, l, j);
    else if (i <= k) findkth(a, i, r);
    else findkth(a, j+1, i-1);
}

int main() {
    cin >> n >> k;
    int* nums = new int[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    findkth(nums, 0, n-1);
    cout << ans;
    return 0;
}