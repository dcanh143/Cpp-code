/* liet ke cac phan tu xuat hien trong mang 1 chieu gom cac gia tri xuat hien dung 1 lan */

#include "iostream"
using namespace std;

void inGiaTri(int n, int a[]) {
    for(int i = 0; i < n; ++i) {
        bool flag = true;
        for(int j = 0; j < n; ++j) {
            if(a[i] == a[j] && i != j) {
                flag = false;
                break;
            }
        }
        if(flag) {
            cout << a[i] << " ";
        }
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    inGiaTri(n, a);
    return 0;
}