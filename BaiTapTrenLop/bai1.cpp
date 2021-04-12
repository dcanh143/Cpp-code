// viet ctrinh de quy tinh k ^ n voi k, n nhap tu ban phim

#include "iostream"
using namespace std;

long luyThua(int k, int n);

int main() {
    int n, k;
    cin >> n >> k;
    cout << luyThua(k, n) << endl;
    return 0;
}

long luyThua(int k, int n) {
    if(k == 0) return 1;
    return luyThua(k - 1, n) * n;
}