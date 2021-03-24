/* Nhap vao 1 xau s dem so lan xuat hien cua 1 tu va in ra tu do theo bang chu cai */
// s = "abc def abc"

#include "iostream"
#include "map"
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    // de tu dau va tu cuoi co khoang trang o 2 dau
    s = " " + s + " ";
    map<string, int> m;
    // danh dau vi tri xuat phat cua 1 tu;
    int start = 0; 
    // vi ki tu dau va cuoi la khoang trang
    for(int i = 1; i < s.length() - 1; ++i)
    {
        if(s[i] != ' ' && s[i - 1] == ' ') // cat tu ra khoi xau
        {
            start = i;
        }
        // kiem tra xem no co phai la 1 chu k vd: s = " b "
        if(s[i] != ' ' && s[i + 1] == ' ') 
        {
            // cat tu khoi 1 xau dung ham s.substr(diem bat dau, diem ket thuc)
            string word = s.substr(start, i - start + 1);
            if(m.find(word) == m.end())
            {
                m.insert(pair<string, int> (word, 1));
            } else
            {
                m[word]++;
            }
        }
    }
    // phe duyet cac phan tu cua map dung iterator
    for(map<string, int> :: iterator it = m.begin(); it != m.end(); ++it)
    {
        // it -> first: key
        //it -> second: value
        cout << it -> first << " " << it -> second << endl;
    }
    return 0;
}