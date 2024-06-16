#include<iostream>


// P1425 小鱼的游泳时间
using namespace std;
int main() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int diff = c*60+d - (a*60+b);
    cout << diff / 60 << " " << diff % 60 << endl;
    return 0;
}

