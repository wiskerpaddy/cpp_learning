#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> a(n, vector<int>(2));
    for (int i = 0; i < n; ++i) {
        cin >> a[i][1];
        cin >> a[i][0];
    }

    sort(a.begin(), a.end(), greater<vector<int>>());

    for (int i = 0; i < n; ++i) {
        cout << a[i][1] << " " << a[i][0] << endl;
    }
}

/*別解
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> ginkin(n, vector<int>(2));
    for (int i = 0; i < n; ++i) {
        cin >> ginkin[i][1];
        cin >> ginkin[i][0];
    }
    
    sort(ginkin.begin(), ginkin.end(), greater<vector<int>>());

    for (int i = 0; i < n; ++i) {
        cout << ginkin[i][1] << " " << ginkin[i][0] << endl;
    }
}
*/