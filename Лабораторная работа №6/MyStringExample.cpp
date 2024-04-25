#include <iostream>
#include "MyString.h"
#include "CustomString.h"
int main()
{
    //setlocale(LC_ALL, "Russian");

     {
        char s[] = "ebc";
        MyString s1(s);
        MyString s2(s1);
        s1.out();
        cout << endl;
        s2.out();
        cout << endl;
        MyString s3;
        s3 = s2;
        s3.out();
        cout << endl;
        MyString s4 = s2 + s3;
        s4.out();
        MyString a("abc");
        cout << (a == s1);
    }
    MyString s6 = "aalaalal";
    cout << s6;
    MyString s7;
    cin >> s7;
    cout << s7<<endl;
}
