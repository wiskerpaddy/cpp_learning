#include <iostream>
using namespace std;
int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！
    int num = 0;
    int val = 0;
    cin >> num;
    string str[num + 1];
    for (int i = 0; i < num + 1; i++) {
        cin >> str[i];
    }
    for (int j = 0; j< num; j++) {
        if(str[num] == str[j]){
            val = j;
            break;
        }
    }
    cout << val + 1 << endl;
}
/*別解
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int k;
    cin >> k;

    for (int i = 0; i < n; ++i) {
        if (a[i] == k) {
            cout << i + 1 << endl;
            break;
        }
    }
}
*/