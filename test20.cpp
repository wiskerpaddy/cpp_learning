#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int　a[n][2];

    for (int i = 0; i < n; ++i) {
        cin >> a[i][0];
        cin >> a[i][1];
    }

    for (int i = 0; i < n; ++i) {
        if ( i != n - 1 ) {
            if ( a[i][0] < a[i+1][0] ){
                int temp1 = 0;
                temp1 = a[i][0];
                a[i][0] = a[i+1][0];
                a[i+1][0] = temp1;
                
                int temp2 = 0;
                temp2 = a[i][1];
                a[i][1] = a[i+1][1];
                a[i+1][1] = temp2;
            } else if ( a[i][1] < a[i+1][1] ){
                int temp1 = 0;
                temp1 = a[i][0];
                a[i][0] = a[i+1][0];
                a[i+1][0] = temp1;
                
                int temp2 = 0;
                temp2 = a[i][1];
                a[i][1] = a[i+1][1];
                a[i+1][1] = temp2;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << a[i][0] << " " << a[i][1] << endl;
    }
}
/*最初に書いたコード
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n][2];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> a[i][j];
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            if(a[0][j] < a[1][j]){
                int temp = 0;
                temp = a[0][j];
                a[0][j] = a[1][j];
                a[1][j] = a[0][j];
            } else {
                
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            if( j == 1 ){ 
                cout << a[i][j];
            } else {
                cout << a[i][j] << " ";
            }
        }
        cout << endl;
    }
}

正解のコード
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> ab(n, vector<int>(2));
    for (int i = 0; i < n; ++i) {
        cin >> ab[i][0];
        cin >> ab[i][1];
    }
    
    sort(ab.begin(), ab.end(), greater<vector<int>>());

    for (int i = 0; i < n; ++i) {
        cout << ab[i][0] << " " << ab[i][1] << endl;
    }
}

*/