/* Viết hàm xoa_phan_tu đọc vào 1 dãy số nguyên có N phần tử và số K. Hãy xóa các số có giá trị nhỏ hơn K trong dãy đó. */

#include "iostream"

using namespace std;

void xoa_phan_tu(int *pa, int &n, int k)
{
    for(int i = 0; i < n; i++)
    {
        if(pa[i] < k)
        {
            for(int j = i; j < n; j++)
            {
                pa[j] = pa[j + 1];
            }
            i--;
            n--;
        }
    }
}

int main()
{
    int n, k;
    cin >> n >> k;

    int a[n];

    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }

    xoa_phan_tu(a, n, k);

    for (int i = 0; i < n; i++)
    {

        cout << a[i] << " ";
    }
}