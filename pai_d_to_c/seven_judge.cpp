/*
・繰り返しの回数を格納する変数に大文字("N"等)の名前をつけるとTIMEOUTする。
*/

#include <iostream>
using namespace std;

int main(void){
    int N = 0;
    bool bl = false;
    string s;
    cin >> N;
    for (int i = 0; i < N; ++N){
        int num = 0;
        cin >> num;
        if (num == 7) {
            bl = true;
        }
    }

    if (bl ==  true){
        s = "YES";
    } else {
        s = "NO";
    }
    cout << s << endl;
}
/*別解
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool flag = false;

    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        if (a == 7) {
            flag = true;
        }
    }

    if (flag) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
*/