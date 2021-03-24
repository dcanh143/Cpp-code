/* Có N con chim. Loài của mỗi con chim được đánh số từ 1 tới 5. 
Tìm loài chim có nhiều con nhất và in ra số hiệu của loài đó. Nếu nhiều loài có cùng số chim thì in ra số hiệu nhỏ nhất. */

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int b[5] = {0};
    int max = 0;
    if (n == 0)
        cout << 0 << endl;
    else
    {
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (a[i] == j + 1)
                    b[a[i] - 1]++;
            }
        }
        for (int i = 0; i < 5; i++)
        {
            if (max < b[i])
                max = b[i];
        }
        for (int i = 0; i < 5; i++)
        {
            if (b[i] == max)
            {
                cout << (i + 1) << endl;
                break;
            }
        }
    }
    return 0;
}