#include "iostream"
#include "cmath"

using namespace std;

bool kiemTraCP(int n);

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i <= n; i++)
    {
        if(kiemTraCP(i)) cout << i << " ";
    }
    return 0;
}

bool kiemTraCP(int n)
{
    int can2 = sqrt(n);
    float _can2 = sqrt(n);
    if(can2 == _can2) return true;
    else return false;
}
