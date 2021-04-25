s = input()
t = input()
result = 0

for i in range(len(t) - len(s) + 1):
    portion = t[i : i + len(s)]

    if portion == s:
        result += 1

print(result)
'''
pattern = input()
string = input()
result = 0

for i in range(len(string) - len(pattern) + 1):
    portion = string[i : i + len(pattern)]

    if portion == pattern:
        result += 1

print(result)
'''

'''
#include <iostream>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    int ans = 0;
    for (int i = 0; i <= t.length() - s.length(); ++i) {
        if (t.substr(i, s.length()) == s) {
            ans++;
        }
    }
    cout << ans << endl;
}
'''
