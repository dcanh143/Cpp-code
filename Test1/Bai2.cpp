/* Trong 1 bàn cờ vây, 1 quân được gọi là hết khí khi 4 hướng xung quanh nó bị vây quanh bởi quân địch. 
Cho trạng thái 1 bàn cờ vây có kích thước m x n, quân trắng được thể hiện bởi số 1, quân đen được biểu thị bởi số 2, các ô không có quân nào được biểu thị bởi số 0. 
Bạn hãy kiểm tra xem có quân trắng nào bị hết khí hay không ? Nếu tồn tại ít nhất 1 quân trắng hết khí thì in ra Yes, còn không thì in ra No. */

#include <iostream>

using namespace std;

int main()
{
    int a[4][4];
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if(a[i][j] == 1)
            {
                if(a[i-1][j] != 1 && a[i][j - 1] != 1 && a[i][j + 1] != 1 && a[i + 1][j] != 1)
                {
                    cout << "YES" << endl;
                    return 0;
                }                                                                                                                                      
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}