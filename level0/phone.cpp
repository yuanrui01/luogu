#include<iostream>
#include<string>

using namespace std;

int main() {
    string line;
    getline(cin, line);
    
    int ans = 0;
    for (char c : line) {
        if (c == ' ' || c == 'a' || c == 'd' || c == 'g' || c == 'j' || c == 'm' || c == 'p' || c == 't' || c == 'w')
            ans++;
        else if (c == 'b' || c == 'e' || c == 'h' || c == 'k' || c == 'n' || c == 'q' || c == 'u' || c == 'x')
            ans += 2;
        else if (c == 'c' || c == 'f' || c == 'i' || c == 'l' || c == 'o' || c == 'r' || c == 'v' || c == 'y')
            ans += 3;
        else 
            ans += 4;
    }
    
    cout << ans << endl;
    return 0;
}