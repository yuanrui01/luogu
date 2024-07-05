#include <iostream>
#include <vector>

using namespace std;

void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {9, 8, 7, 6, 5, 4, 3, 2, 1};

    cout << "Initial array: ";
    printArray(arr);

    int len = arr.size();
    for (int i = 0; i < len - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < len; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }

    cout << "Sorted array: ";
    printArray(arr);

    return 0;
}
