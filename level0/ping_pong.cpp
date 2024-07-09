#include<iostream>
#include<algorithm>
using namespace std;

#define ROW 25
#define COL 2500

char tmp;
int arr[ROW * COL + 1];
int n;
int sa[2] = {11, 21};
int main(void) {
    
    while (1) {
        cin >> tmp;
        if (tmp == 'E') {
            break;
        } else if (tmp == 'W') {
            arr[++n] = 1;
        } else if (tmp == 'L') {
            arr[++n] = 0;
        }
    }

    for (int i = 0; i < 2; ++i) {
        int size = sa[i];

        int w = 0;
        int l = 0;
        for (int j = 1; j <= n; ++j) {
            if (arr[j] == 1)
                w++;
            else 
                l++;
            if (max(w, l) >= size && abs(w - l) >= 2) {
                cout << w << ":" << l << endl;
                w = l = 0;
            }
        }
        cout << w << ":" << l << endl;
        cout << endl;
    }

    return 0;
}