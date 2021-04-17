#include <iostream>
using namespace std;
int main(void){
    int n;
    cin >> n;
    int token1[n];
    int max = 0;

    for(int i = 0; i < n; i++) {
        cin >> token1[n];
        if (max < token1[n]){
            max = token1[n];
        }
    }
    cout << max << endl;
    return 0;
}