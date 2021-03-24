/* Đọc vào chuỗi thời gian dạng 12 tiếng. Viết hàm chuyển đổi, rồi in ra thời gian dạng 24 tiếng.
Chú ý: - 12:00:00AM trong định dang 12 tiếng là 00:00:00 trong định dang 24 tiếng
- 12:00:00PM trong định đạng 12 tiếng là 12:00:00 trong định dang 24 tiếng. */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string str;
    cin >> str;
    int a[6];
    a[0] = str[0] - '0';
    a[1] = str[1] - '0';
    a[2] = str[3] - '0';
    a[3] = str[4] - '0';
    a[4] = str[6] - '0';
    a[5] = str[7] - '0';
    int hour, min, sec;
    hour = a[0] * 10 + a[1];
    min = a[2] * 10 + a[3];
    sec = a[4] * 10 + a[5];
    switch (hour)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
        if (str[8] == 'A')
        {
            cout << setfill('0') << setw(2) << hour << ":" << setfill('0') << setw(2) << min << ":" << setfill('0') << setw(2) << sec << endl;
        }
        else
        {
            hour = hour + 12;
            cout << setfill('0') << setw(2) << hour << ":" << setfill('0') << setw(2) << min << ":" << setfill('0') << setw(2) << sec << endl;
        }
        break;
    case 12:
        if (str[8] == 'A')
        {
            hour = 0;
            cout << setfill('0') << setw(2) << hour << ":" << setfill('0') << setw(2) << min << ":" << setfill('0') << setw(2) << sec << endl;
        }
        else
        {
            cout << setfill('0') << setw(2) << hour << ":" << setfill('0') << setw(2) << min << ":" << setfill('0') << setw(2) << sec << endl;
        }
    }
    return 0;
}