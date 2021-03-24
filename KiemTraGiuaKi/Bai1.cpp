/* 1.cho 1 mang cac so nguyen, tinh tong cac so chan bang phuong phap de quy */

#include "iostream"
using namespace std;

int tinhTongsoChan(int n, int a[]) {
    if(n <= 1){
        if(a[0] % 2 == 0) return a[0];
        else return 0;
    }
    if(a[n - 1] % 2 == 0) return a[n - 1] + tinhTongsoChan(n - 1, a);
    else return tinhTongsoChan(n - 1, a);
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    cout << tinhTongsoChan(n, a) << endl;
    return 0;
}