#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s[n];
    
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }
    int m;
    cin >> m;
    map<string, int> zaisan;
    int ab = 0;
    string st,arp;

    for (int j = 0; j < m; ++j) {
        cin >> st >> ab;
        zaisan[st] += ab;
    }
    
    for (int k = n; 0 < k; --k) {
        arp = s[k-1];
        cout << zaisan[arp] << endl;
    }
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
        string s; cin >> s;
        //初期化
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

    //イテレータの先頭は dmg.begin() で取り出す事ができ、
    //末尾は dmg.end() で取り出すことができます。
    //この際、map の要素はキー（添字）に関して昇順になっています。
    for (auto iter = dmg.begin(); iter != dmg.end(); ++iter) {
        cout << iter->second << endl;
    }
}
*/