#include<iostream>
#include<string>
using namespace std;

int n, x, ans;

struct student {
    int id;
    int academic;
    int quality;
    int overall;
    student(int _id, int _ac, int _qu) {
        id = _id;
        academic = _ac;
        quality = _qu;
        overall = int ((0.7 * _ac + 0.3 * _qu) * 10);
    }
    student(){}
    int sum () {
        return academic + quality;
    }
};

int is_excellent(student s) {
    return s.overall >= 800 && s.sum() > 140;
}

int main() {
    cin >> n;

    for(int i = 1; i <= n; ++i) {
        int tmp_id, tmp_ac, tmp_qu;
        cin >> tmp_id >> tmp_ac >> tmp_qu;
        student one(tmp_id, tmp_ac, tmp_qu);
        if(is_excellent(one))
            cout << "Excellent" << endl;
        else 
            cout << "Not excellent" << endl;
    }
    return 0;
}