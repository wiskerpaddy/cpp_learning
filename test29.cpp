#include <iostream>
#include <map>
using namespace std;

int main() {
    int p,q,r;
    cin >> p >> q >> r;

    map<int, int> a_box;
    map<int, int> b_box;

    for (int i = 0; i < p; ++i) {
        int iraisaki = 0;
        int tmp = 0;

        cin >> tmp >> iraisaki;
        a_box[tmp] = iraisaki;
    }

    for (int j = 0; j < q; ++j) {
        int iraisaki = 0;
        int tmp = 0;

        cin >> tmp >> iraisaki;
        b_box[tmp] = iraisaki;
    }

    for (int l = 1; l <= p; ++l) {
        cout << l << " " << b_box[a_box[l]] << endl;
    }
}
/*別解
#include <iostream>
#include <map>
using namespace std;

int main() {
    int p, q, r;
    cin >> p >> q >> r;
    
    map<int, int> AB;
    map<int, int> BC;

    for (int x = 0; x < p; ++x) {
        int i, j;
        cin >> i >> j;
        AB[i] = j;
    }

    for (int x = 0; x < q; ++x) {
        int j, k;
        cin >> j >> k;
        BC[j] = k;
    }

    for (int i = 1; i <= p; ++i) {
        cout << i << ' ' << BC[AB[i]] << endl;
    }
}
*/