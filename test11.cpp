#include <iostream>
using namespace std;
int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {

        string s = "";
        string hs = "";
        string ms = "";
        int hd = 0;
        int md = 0;

        cin >> s >> hd >> md;

        int h = stoi(s.substr(0, 2));
        int m = stoi(s.substr(3));
        int k = ((h + hd) * 60)  + m + md;

        if (m + md >= 60) {
            ms = to_string(m + md - 60);

            if (h + hd >= 24) {
                hs = to_string(h + hd - 24 + 1);
            } else {
                hs = to_string(h + hd + 1);
            }
        } else {
            ms = to_string(m + md);

            if (h + hd >= 24) {
                hs = to_string(h + hd - 24);
            } else {
                hs = to_string(h + hd);
            }
        }

        if (24 == k / 60) {
            hs = "0";
        }
        if (hs.length() < 2) {
            hs = "0" + hs;
        }
        if (ms.length() < 2) {
            ms = "0" + ms;
        }
        cout << hs << ":" << ms << endl;
    }
}
/*別解
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        string t;
        int h, m;
        cin >> t >> h >> m;
        int t_h = stoi(t.substr(0, 2));
        int t_m = stoi(t.substr(3));

        int a_h = t_h + h;
        int a_m = t_m + m;
        if (a_m >= 60) {
            a_h += 1;
            a_m -= 60;
        }
        if (a_h >= 24) {
            a_h -= 24;
        }

        string a_hs = to_string(a_h);
        string a_ms = to_string(a_m);
        if (a_hs.length() < 2) {
            a_hs = "0" + a_hs;
        }
        if (a_ms.length() < 2) {
            a_ms = "0" + a_ms;
        }
        cout << a_hs << ":" << a_ms << endl;
    }
}
*/