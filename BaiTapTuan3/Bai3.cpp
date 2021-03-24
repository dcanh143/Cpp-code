/* Pig Latin
Nếu từ bắt đầu bởi một phụ âm, chuyển phụ âm xuống cuối của từ và thêm "ay" vào cuối từ. Theo đó, "ball" trở thành "allbay".
Nếu từ bắt đầu bởi một nguyên âm, thêm "way" vào cuối từ. Theo đó, "one" trở thành "oneway". */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int flag = 0;
    string str;
    cin >> str;
    char s_0 = str[0];
    string strcp = str;
    int n = str.length();
    char c[5] = {'u', 'e', 'o', 'a', 'i'};
    for (int i = 0; i < 5; i++)
    {
        if (str[0] == c[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        for (int i = 0; i < n - 1; i++)
        {
            str[i] = str[i + 1];
        }
        str[n - 1] = s_0;
        str += "ay";
        cout << str << endl;
    }
    else
    {
        str += "way";
        cout << str << endl;
    }
    return 0;
}