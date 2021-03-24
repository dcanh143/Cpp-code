#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;
    float step = (float)(x2 - x1) / (v1 - v2);
    int step_int = (x2 - x1) / (v1 - v2);
    if ((step != step_int) || (step_int < 0) || (step_int == 0))
    {
        cout << "no" << endl;
    }
    else
    {
        cout << "yes" << endl;
    }
    return 0;
}