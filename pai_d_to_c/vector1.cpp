/*入れ子2つ
・for文の内側はexcelでいう列で1増えると下に1ずれる
・　　　 外側はexcelでいう行で1増えると右に1ずれる
入れ子3つ
・forの最内側は1の位
・　　　 外側は10の位
・　　　 最外側は100の位
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m;
    cin >> m;
    vector<string> a(m);

    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }

    int n;
    cin >> n;
    vector<string> b(n);

    for (int j = 0; j < n; j++) {
        cin >> b[j];
    }

    for (int k = 0; k < m; k++) {
        for (int l = 0; l < n; l++) {
            if ((b[l].find(a[k])) != -1) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
}
/*別解
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m;
    cin >> m;
    vector<char> c(m);

    for (int i = 0; i < m; ++i) {
        cin >> c[i];
    }

    int n;
    cin >> n;
    vector<string> s(n);

    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            bool flag = false;
            for (int k = 0; k < s[j].length(); ++k) {
                if (s[j][k] == c[i]) {
                    flag = true;
                }
            }
            if (flag) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
}
*/