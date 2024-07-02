#include<iostream>
#include<string>

using namespace std;

int main() {
    string word, s;
    getline(cin , word);
    getline(cin, s);

    for (int i = 0; i < word.length(); ++i) {
        if ('A' <= word[i] && word[i] <= 'Z')
            word[i] += 'a' - 'A';
    }

    for (int i = 0; i < s.length(); ++i) {
        if ('A' <= s[i] && s[i] <= 'Z')
            s[i] += 'a' - 'A';
    }

    word = ' ' + word + ' ';
    s = ' ' + s + ' ';
    
    int first_pos = s.find(word);
    if (first_pos == -1)
        cout << -1 << endl;
    else {
        int next_pos = first_pos, cnt = 0;
        while (next_pos != -1) {
            cnt++;
            next_pos = s.find(word, next_pos + 1);
        }
        cout << cnt << " " << first_pos << endl;
    }
    return 0;
}