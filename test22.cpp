#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> zaisan;
    for (int i = 0; i < n; ++i) {
        string s;
        int a;
        cin >> s >> a;
        zaisan[s] = a;
    }
    string s;
    cin >> s;
    cout << zaisan[s] << endl;
}
/*
辞書型sort
*/