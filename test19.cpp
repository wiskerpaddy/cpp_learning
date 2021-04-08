#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！
    int n;
    cin >> n;
    vector<int> m(n);
    for (int i = 0; i < n; ++i) {
        cin >> m[i];
    }

    sort(m.begin(),m.end());
    reverse(m.begin(),m.end());

    for (int k = 0; k < n; ++k) {
        cout << m[k] << endl;
    }
}
/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a.begin(), a.end(), greater<int>());

    for (int i = 0; i < n; ++i) {
        cout << a[i] << endl;
    }
}
*/