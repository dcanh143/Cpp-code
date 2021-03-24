/* Cho số nguyên n, tính hiệu của chữ số lớn nhất và chữ số nhỏ nhất của số nguyên đó. */

#include <iostream>

using namespace std;

int main()
{
    string str;
    cin >> str;
    sort(str.begin(), str.begin() + str.length());
    int min = str[0] - '0';
    int max = str[str.length() - 1] - '0';
    cout << (max - min) << endl;
    return 0;
}