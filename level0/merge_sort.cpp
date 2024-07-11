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
 */
void sort(int a[], int low, int high) {
    if (high <= low)
        return;
    int mid = low + (high - low) / 2;
    sort(a, low, mid);
    sort(a, mid + 1, high);
    merge(a, low, mid, high);
}

int main(void) {
    int a[] = {9,8,7,6,5,4,3,2,1};
    sort(a, 0, 8);
    for (int i = 0; i < 9; ++i)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}