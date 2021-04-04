#include <iostream>
using namespace std;
int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ
    string S; cin >> S;
    for(int i=0;i<3-S.length();i++){
        std::cout << "0";
    }
    for(int j=0;j<S.length();j++){
        std::cout << S[j];
    }
    std::cout << std::endl;
}
/*解答
#include <iostream>
using namespace std;

int main() {
    string n;
    cin >> n;
    while (n.length() < 3) {
        
        n = "0" + n;
    }
    cout << n << endl;
}
*/