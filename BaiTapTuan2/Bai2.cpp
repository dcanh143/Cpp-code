/* Có N con chim. Loài của mỗi con chim được đánh số từ 1 tới 5. 
Tìm loài chim có nhiều con nhất và in ra số hiệu của loài đó. Nếu nhiều loài có cùng số chim thì in ra số hiệu nhỏ nhất. */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int min = abs(a[0] - a[1]);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(min > abs(a[i] - a[j])) min = abs(a[i] - a[j]);
        }
    }
    cout << min << endl;
    return 0;
}