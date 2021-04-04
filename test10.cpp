#include <iostream>
using namespace std;
int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！
    int flag = 0;
    int a = 0;
    int b = 0;
    string s;
    cin >> a;
    for (int i = 0; i < a; a++){
        cin >> b;
        if (b == 7) {
            flag++;
        }
    }
    if (0 < flag ){
        s ="YES";
    } else {
        s = "NO";
    }
    cout << s << endl;
}