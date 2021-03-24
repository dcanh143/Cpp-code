/* Khi xử lý điểm của sinh viên, cần làm một trong 3 loại thao tác:

-        1 X Y: cộng thêm điểm Y vào trong tổng điểm của sinh viên X

-        2 X: xoá đi điểm của sinh viên X

-        3 X: in ra tổng điểm của sinh viên X. (Nếu sinh viên X không có điểm thì in ra 0). */
#include "iostream"
#include "vector"
#include "map"
using namespace std;

int main()
{
    int q;
    cin >> q;
    int thaoTac;
    map<string, int> m;
    for (int i = 0; i < q; ++i)
    {
        cin >> thaoTac;
        cout << thaoTac " ";
        string s;
        cin >> s;
        cout << s << " ";
        int t;
        if(thaoTac == 1) {
            cin >> t;
            cout << t << endl;
        }
    }
    return 0;
}
