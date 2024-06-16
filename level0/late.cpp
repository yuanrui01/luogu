#include<cstdio>
#include<cmath>
using namespace std;

int main() {
    int s, v;
    scanf("%d%d", &s,&v);
    int consume = ceil(1.0*s/v) + 10;
    int n = (32 * 60 - consume) % (24 * 60);
    printf("%02d:%02d", n / 60, n % 60);
    return 0;
}