/* Một chuỗi s được gọi là hợp lệ với xâu c khi s chứa tất cả các kí tự của một xâu c và sắp xếp theo đúng thứ tự, không cần liền sát nhau.
 Viết hàm kiểm tra xem chuỗi s có hợp lệ với xâu  "congnghe" hay không? */

#include <iostream>
#include <string>

using namespace std;

void checkCN(string str)
{
    string s = "congnghe";
    int m = 0;
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == s[m])
        {
            count++;
            m++;
        }
    }
    if (count == s.length())
        cout << "yes" << endl;
    else
        cout << "no" << endl;
}

int main()
{
    int n;
    cin >> n;
    string str;
    for(int i = 0; i < n; i++)
    {
        cin >> str;
        checkCN(str);
    }
    return 0;
}