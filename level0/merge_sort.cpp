#include<iostream>
#include<algorithm>

using namespace std;

// 辅助数组
int aux[10];

/*
 * 合并数据
 */
void merge(int a[], int low, int mid, int high) {
    int i = low;
    int j = mid + 1;

    for (int k = low; k <= high; ++k)
        aux[k] = a[k];
    
    for (int k = low; k <= high; ++k) {
        if (i > mid) 
            a[k] = aux[j++];
        else if (j > high)
            a[k] = aux[i++];
        else if (aux[i] < aux[j])
            a[k] = aux[i++];
        else 
            a[k] = aux[j++];
    }
}

/**
 * 自顶向下归并排序
 * 可扩展的优化点：
 * 1. 对于小数组直接使用插入排序
 * 2. merge之前检查 mid和mid+1元素，如果满足 nums[mid] <= nums[mid + 1] 说明已经有序，无需merge
 */
void sort(int a[], int low, int high) {
    if (high <= low)
        return;
    int mid = low + (high - low) / 2;
    sort(a, low, mid);
    sort(a, mid + 1, high);
    if (mid + 1 <= high && a[mid] <= a[mid + 1])
        return;
    merge(a, low, mid, high);
}

/**
 * 自底向上归并排序
 */
void upper_sort(int a[]) {
    int N = 9;
    for (int sz = 1; sz < N; sz += sz) {
        for (int lo = 0; lo < N - sz; lo += (sz + sz)) {
            merge(a, lo, lo + sz - 1, min(lo + sz + sz - 1, N - 1));
        }
    }
}

int main(void) {
    int a[] = {9,8,7,6,5,4,3,2,1};
    upper_sort(a);
    for (int i = 0; i < 9; ++i)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}