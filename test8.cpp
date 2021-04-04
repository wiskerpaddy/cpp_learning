#include<iostream>
#include<string>
#include <sstream>
using namespace std;
int main(void){
    string S;
    cin >> S;
    istringstream a,b,c,d;
    int ba[4];
    string S1[4];

    for(int i = 0; i < 4; i++){
        S1[i] = S[i];
    }

    a = istringstream(S1[0]);
    a >> ba[0];
    b = istringstream(S1[1]);
    b >> ba[1];
    c = istringstream(S1[2]);
    c >> ba[2];
    d = istringstream(S1[3]);
    d >> ba[3];

    int ad = ba[0] + ba[3];
    int bc = ba[1] + ba[2];

    std::cout << ad << bc << std::endl;
}
/*解答
#include <iostream>
using namespace std;

int main() {
    string S; cin >> S;
    int a = (S[0] - '0') + (S[3] - '0');
    int b = (S[1] - '0') + (S[2] - '0');
    cout << a << b << endl;
}
*/