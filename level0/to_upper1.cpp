#include<iostream>
#include<string>

using namespace std;

string to_upper(string s) {
    cout << &s << endl;
    for (int i = 0; i < s.length(); ++i) {
        if ('a' <= s[i] && s[i] <= 'z')
            s[i] -= 'a' - 'A';
    }
    return s;
}


int main() {
    string s1, s2;
    getline(cin, s1);
    cout <<  &s1 << endl;
    cout <<  &s2 << endl;
    s2 = to_upper(s1);
    cout <<  &s1 << endl;
    cout << &s2 << endl;
    cout << s1 << endl;
    cout << s2 << endl;
    return 0;
}