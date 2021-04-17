#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s[n];
    
    for (int i = 0; i < n; ++i) {
        cin >> s[n];
    }
    int m;
    cin >> m;
    map<string, int> zaisan;
    int ab = 0;
    string st;
    
    for (int i = 0; i < m; ++i) {
        cin >> st >> ab;
        zaisan[st] += ab;
    }
    string sy;
    cin >> sy;
    cout << zaisan[sy] << endl;
}
/*
別解
#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> dmg;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        dmg[s] = 0;
    }
    
    int m;
    cin >> m;
    for (int i = 0; i < m; ++i) {
        string p;
        int a;
        cin >> p >> a;
        dmg[p] += a;
    }
    string s;
    cin >> s;
    cout << dmg[s] << endl;
}

*/