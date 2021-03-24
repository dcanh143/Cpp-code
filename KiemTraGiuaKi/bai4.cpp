/* xoa cac phan tu trung nhau torng mnag */

#include "iostream"
using namespace std;

void xoaPhanTu(int a[], int &n, int pos) {
    if(n < 0) {
        return;
    } 
    if(pos < 0) {
        pos = 0;
    } else if(pos == n) {
        pos = n - 1;
    }
    for(int i = pos; i < n - 1; ++i) {
        a[i] = a[i + 1];
    }
    --n;
}

void xoaPhanTuTrung(int a[], int &n) {
    for(int i = 0; i < n; ++i) {
        for(int j = i + 1; j < n; ++j) {
            if(a[i] == a[j] && i != j) {
                xoaPhanTu(a, n, j);
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    xoaPhanTuTrung(a, n);
    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    return 0;
}