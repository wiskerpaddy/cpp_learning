#include <iostream>
using namespace std;
int main(void){
    int n;
    cin >> n;
    string token1[n];
    int token2[n];
    for(int i = 0; i < n; i++) {
        cin >> token1[i] >> token2[i];
        cout << token1[i] + " " << token2[i] + 1<< endl;
    }
}