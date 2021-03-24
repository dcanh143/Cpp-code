/* Nhập vào xâu kí tự s. Chuẩn hoá xâu theo các quy tắc sau:

Mỗi từ chỉ cách nhau 1 dấu cách.
Cuối câu kết thúc bằng dấu chấm (Nếu xâu s chưa có dấu chấm thì thêm vào, nếu có rồi thì thôi).
Viết hoa kí tự đầu tại mỗi từ. */

#include "iostream"
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int n = s.length();
    int i = 0;
    while(i < n) {
        if(i == 0) {
            if(s[i] == ' ' && s[i + 1] != ' ') {
                s.erase(s.begin() + i);
            }
        }
        if(s[i + 1] == ' ' && s[i] == ' ') {
            s.erase(s.begin() + i);
            --n;
            --i;
        }
        ++i;
    } 
    for(int i = 0; i < s.length(); ++i) {
        if(i == 0){
            if(s[0] <= 'z' && s[0] >= 'a') {
                s[0] -= 32;
            }
        }
        if(s[i - 1] == ' ' && s[i] != ' ' && (s[i] <= 'z' && s[i] >= 'a')) s[i] -= 32;
    }
    if(s[s.length() - 1] != '.') s += '.';
    cout << s << endl;
    return 0;
}