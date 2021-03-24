/*
    Nhap vao day n so nguyen, dem so lan xuat hien cua tung phan tu va in ra phan tu va so lan  xuat hien
 */
// n = 5
// a[n] = {1, 1, 2, 3, 3}

#include "iostream"
#include "map"
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i)
    {
        cin >> a[i]; // nhap mang
    }
    // tao map voi key la int, value la int
    map<int, int> m; 
    for(int i = 0; i < n; ++i)
    {
        //kiem tra xem a[i] da co trong map hay chua = m.end() la chua co
        if(m.find(a[i]) == m.end()) 
        {
            // them phan tu vao map thi phai them 1 cap pair<>()
            m.insert(pair<int, int>(a[i], 1)); 
        } else 
        {
            // neu co roi, truy suat 1 key cua map
            m[a[i]]++; 
        }
    }
    // duyet cac phan tu trong 1 map
    for(map<int, int> :: iterator it = m.begin(); it != m.end(); ++it)
    {
        // it -> first la key
        // it -> second la value
        cout << it -> first << " " << it -> second << endl;
    }
    return 0;
}