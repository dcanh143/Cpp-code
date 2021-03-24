#include "iostream"
#include "map"
using namespace std;

int main() {
    map<string, int> m;
    string s;
    cin >> s;
    if(m.find(s) == m.end()) {
        m.insert(pair<string, int>(s, 1));
    } else {
        m[s] ++;
    }
    cout << m[s] << endl;
    return 0;
}