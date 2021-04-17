/*
・最後に同時に処理できる箇所が複数ないか調べる。
・二次元配列を使う場合は情報を二つにまとめられる場合
　例：人の情報を人ごとに保持する場合
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num_people,num_favo,num_ans;
    cin >> num_people >> num_favo >> num_ans;//N
    int nv[num_people][num_favo];
    vector<int> num_result(num_people);
    for (int i = 0; i < num_people; i++) {
        for (int j = 0; j < num_favo; j++) {
            cin >> nv[i][j];
        }
        for (int l = 0; l < num_favo; l++) {
            if (nv[k][l] == num_ans) {
                num_result[k]++;
            }
        }
        cout << num_result[k] << endl;
    }
}
/*別解
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    for (int i = 0; i < n; ++i) {
        int ans = 0;
        vector<int> a(m);
        for (int j = 0; j < m; ++j) {
            cin >> a[j];
        }
        for (int j = 0; j < m; ++j) {
            if (a[j] == k) {
                ans++;
            }
        }
        cout << ans << endl;
    }
}
*/