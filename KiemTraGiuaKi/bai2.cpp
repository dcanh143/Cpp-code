/* nhap vao 1 mang so nguyen, tinh gia tri dau tien cua mang nam trong khonag (x, y) neu khong co thi tra ve "-1" */

#include "iostream"
using namespace std;

int inGiaTri(int x, int y, int n, int a[]) {
    for(int i = 0; i < n; ++i) {
        if(a[i] < y && a[i] > x) {
            return a[i];
        }
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int x, y;
    cin >> x >> y;
    cout << inGiaTri(x,y,n,a) << endl;
    return 0;
}