#include <iostream>
using namespace std;
int main(void){
    int n,a,b;
    int p = 1;
    int k = 1;
    cin >> n >> a >> b;

    for (int i = 1 ;;++i) {
        k += p * a;
        if( n < k ){
            cout << i;
            break;
        }
        p += k % b;
    }
}
/*別解
#include <iostream>
using namespace std;

int main (){
    int n;
    cin >> n;
    int a, b;
    cin >> a >> b;
    int paiza = 1;
    int kyoko = 1;
    int times = 0;
    while (true) {
        times++;
        kyoko += paiza * a;

        if (kyoko > n) {
            break;
        }
        paiza += kyoko % b;
    }
    cout << times << endl;
}
*/