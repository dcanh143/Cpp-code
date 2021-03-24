#include "iostream"
using namespace std;

void update(int *a, int *b); 

int main() {
    int a, b;
    cin >> a >> b;
    int *x = &a, *y = &b;
    update(x, y);
}

void update(int *a, int *b) {
    int tong = abs(*a + *b);
    int hieu = abs(*a - *b);
    cout << tong << "\n" << hieu << endl;
}