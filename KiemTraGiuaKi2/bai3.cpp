/* Nhập vào ma trận con có kích thước m x n và 1 số nguyên k.

In ra ma trận con kích thước k x k có tổng lớn nhất. */

#include <iostream>
using namespace std;
int main()
{
    int rows, cols;
    int m[100][100];
    int s[100][100];
    int ans = -1, x1, y1, x2, y2;
    cin >> rows >> cols;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> m[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            int sum = 0;
            if (i > 0)
                sum += s[i - 1][j];
            if (j > 0)
                sum += s[i][j - 1];
            if (i > 0 && j > 0)
                sum -= s[i - 1][j - 1];

            s[i][j] = sum + m[i][j];
        }
    }
    int k;
    cin >> k;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            for (int p = i; p < rows; ++p)
            {
                for (int l = j; l < cols; ++l)
                {
                    int sum = s[p][l];
                    if (i > 0)
                        sum -= s[i - 1][l];
                    if (j > 0)
                        sum -= s[p][j - 1];
                    if (i > 0 && j > 0)
                        sum += s[i - 1][j - 1];

                    if (p - i + 1 == k && l - j + 1 == k)
                    {
                        if (sum > ans)
                        {
                            ans = sum;
                            x1 = i;
                            y1 = j;
                            x2 = p;
                            y2 = l;
                        }
                    }
                }
            }
        }
    }

    for (int i = x1; i <= x2; ++i)
    {
        for (int j = y1; j <= y2; ++j)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}