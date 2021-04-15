#include <iostream>
#include <map>
using namespace std;
int main(void){
    int h = 0;
    cin >> h;

    map<int, int> dmgPai;
    map<int, int> dmgMon;
    for (int n = 1;;n++) {
        if (3 <= n) {
            dmgPai[n] += (dmgMon[n-1] + dmgMon[n-2]);
            dmgMon[n] += ((dmgPai[n-1] * 2) + dmgPai[n-2]);
        } else {
            dmgPai[n] = 1;
            dmgMon[n] = 1;
        }
        h -= dmgMon[n];

        if(h <= 0){
            cout << n;
            break;
        }
    }
}
/*別解
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int H;
    cin >> H;

    vector<int> a = {0, 1, 1};
    vector<int> b = {0, 1, 1};

    int dmg = 2;

    int i = 2;
    while (dmg < H) {
        a[0] = a[1];
        a[1] = a[2];
        b[0] = b[1];
        b[1] = b[2];

        a[2] = b[0] + b[1];
        b[2] = a[0] + 2 * a[1];

        dmg += b[2];

        i++;
    }
    cout << i << endl;
}
*/