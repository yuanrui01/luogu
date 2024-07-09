#include<iostream>
#include<string>

#define maxn 5010

using namespace std;

int a[maxn], b[maxn], c[maxn];
int main(void) {

    string A, B;
    cin >> A >> B;
    int alen = A.length();
    int blen = B.length();

    for (int i = alen - 1; i >= 0; --i) {
        a[alen - i] = A[i] - '0';
    }

    for (int i = blen - 1; i >= 0; --i) {
        b[blen - i] = B[i] - '0';
    }

    for (int i = 1; i <= alen; ++i) {
        for (int j = 1; j <= blen; ++j) {
            c[i + j - 1] += a[i] * b[j];
        }
    }
    int clen = alen + blen;
    for (int i = 1; i <= clen; ++i) {
        c[i + 1] += c[i] / 10;
        c[i] = c[i] % 10;
    }
    while(!c[clen])
        clen--;

    for (int i = max(1, clen); i >= 1; --i)
        cout << c[i];
    cout << endl;
    return 0;
}