/* nhap vao 1 mang in ra cac bo 3 so a, b, c sao cho a = b + c*/

#include "iostream"
#include "vector"
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a;
    for(int i = 0; i < n; ++i) {
        int m;
        cin >> m;
        a.push_back(m);
    }
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            for(int k = 0; k < n; ++k) {
                if(a[i] == (a[j] + a[k]) && (j > k)) {
                    cout << a[i] << " = " << a[j] << " + " << a[k] << endl;
                }
            }
        }
    }
    return 0;
}