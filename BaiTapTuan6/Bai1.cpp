/* Cho Q thao tác (query). Mỗi thao tác thuộc 1 trong 3 loại:

-        1  x: Thêm x vào tập

-        2  x: Loại x khỏi tập (Nếu x không có, không làm gì cả)

-        3  x: Nếu x trong tập, in ra “Yes” còn nếu không in ra “No" */

#include "iostream"
#include "vector"
using namespace std;

int main() {
    vector<int> vect;
    int q;
    cin >> q;
    int thaoTac;
    int n = 3;
    for(int i = 0;i < n; ++i) {
        vect.push_back(0);
    }
    for(int i = 0; i < q; ++i) {
        cin >> thaoTac;
        int x;
        cin >> x;
        switch (thaoTac)
        {
        case 1:
            vect.push_back(x);
            n++;
            break;
        case 2:
            for(int i = 0; i < n; ++i) {
                if(vect[i] == x) {
                    vect.erase(vect.begin() + i);
                }
            }
            n--;
            break;
        case 3:
            bool flag = false;
            for(int i = 0; i < n; ++i) {
                if(vect[i] == x) {
                    flag = true;
                    break;
                }
            }
            if(!flag) {
                cout << "No" << endl;
            } else {
                cout << "Yes" << endl;
            }
            break;
        }
    }
    return 0;
}