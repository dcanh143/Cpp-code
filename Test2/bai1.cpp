/* nhap vao 1 mang so nguyen in ra cac so chan ma truoc no hoac sau no la so chan */

#include "iostream"
#include "vector"
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vect;
    for(int i = 0; i < n; ++i) {
        int m;
        cin >> m;
        vect.push_back(m);
    }
    for(int i = 0; i < n; ++i) {
        if((vect[i + 1] % 2 == 0 || vect[i - 1] == 0) && (vect[i] % 2 == 0)) {
            cout << vect[i] << " ";
        }
    }
    return 0;
}