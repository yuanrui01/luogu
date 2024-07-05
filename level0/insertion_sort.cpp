#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> arr = {9,8,7,6,5,4,3,2,1};
    int sz = arr.size();
    for (int i = 1; i < sz; ++i) {
        int insert_element = arr[i];
        int j = i;
        while (j > 0 && arr[j - 1] > insert_element) {
            //往前移动
            arr[j] = arr[j - 1];
            j--;
        }
        arr[j] = insert_element;
    }

    for(int num : arr) 
        cout << num << " ";
    cout << endl;
    return 0;
}