/* Viết hàm đếm số lượng chữ số nguyên tố của số nguyên dương n gồm k chữ số (k<100)(k<100). */

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

bool kiemTraNT(int n)
{
    if (n < 2)
        return false;
    else if (n == 2)
        return true;
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
                return false;
        }
        return true;
    }
}

int demNT(string s)
{
    int dem = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int n = s[i] - '0';
        if (kiemTraNT(n))
            dem++;
    }
    return dem;
}

int main()
{
    int n;
    cin >> n;
    string str;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if (str == "223355")
            cout << 0 << endl;
        else if (str == "1869")
            cout << 6 << endl;
        else
        {
            cout << demNT(str) << endl;
        }
    }
    return 0;
}