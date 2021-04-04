#include <iostream>
using namespace std;
int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！
    string str,str2;
    cin >> str >> str2;
    if(str2.find(str) == -1){
        std::cout << "NO" << std::endl;
    }else{
        std::cout << "YES" << std::endl;
    }
    return 0;
}

/* 別解
#include <iostream>
using namespace std;

int main() {
    char a;
    string S;
    cin >> a >> S;
    bool flag = false;
    for (int i = 0; i < S.length(); ++i) {
        if (S[i] == a) {
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