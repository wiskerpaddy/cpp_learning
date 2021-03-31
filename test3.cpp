#include <iostream>
using namespace std;
int main(void){
    int n;
    cin >> n;

    for(int i = n; 0 < i ; i--) {
        if(i == 1){
            cout << "paiza" << endl;
        }else{
            cout << "paiza" << " ";
        }
    }
    return 0;
}
/*別解
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string ans = "paiza";
    for (int i = 0; i < n-1; ++i) {
        ans += " paiza";
    }
    cout << ans << endl;
}
*/