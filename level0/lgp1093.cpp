#include<iostream>
#include<algorithm>
using namespace std;

int const MAXN = 301;
int n;

struct student
{
    int id, chinese, total;
}a[MAXN];

int cmp(student a, student b) {
    if (a.total != b.total) return a.total > b.total;
    if (a.chinese != b.chinese) return a.chinese > b.chinese;
    return a.id < b.id;
}

// P1093 [NOIP2007 普及组] 奖学金
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int math, english;
        cin >> a[i].chinese >> math >> english;
        a[i].total = a[i].chinese + math + english;
        a[i].id = i + 1;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < 5; i++) {
        cout << a[i].id << " " << a[i].total << endl;
    }
    return 0;
}
